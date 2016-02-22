/*
    This file is part of AutoQuad.

    AutoQuad is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AutoQuad is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with AutoQuad.  If not, see <http://www.gnu.org/licenses/>.

    Copyright 2016 Maxim Paperno
*/

#ifndef _CONFIG_PARAMS_H_
#define _CONFIG_PARAMS_H_

#include "aq.h"
#include "config.h"

#include <float.h>
#include <limits.h>

/*
Define all params here. Order must match configParameters enum in config.h.

When adding, removing, or modifying the meaning of a param, increment CONFIG_CURRENT_VERSION macro,
    and, unless deleting, specify that new number in the VER column of the new/changed param.

Param names must be kept <= 16 chars for mavlink.
*/

const paramRecordMeta_t configParamMeta[] = {
//   ID			NAME			VER	TYPE		ADJ	MIN		MAX		DEFAULT
    {CONFIG_VERSION,	"CONFIG_VERSION",	117,	AQ_TYPE_U16,	0,	0,		UINT16_MAX,	CONFIG_CURRENT_VERSION},
    {CONFIG_FLAGS,	"CONFIG_FLAGS",		132,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_CONFIG_FLAGS},
    {CONFIG_ADJUST_P1,	"CONFIG_ADJUST_P1",	132,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_CONFIG_ADJUST_P1},
    {CONFIG_ADJUST_P2,	"CONFIG_ADJUST_P2",	132,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_CONFIG_ADJUST_P2},
    {CONFIG_ADJUST_P3,	"CONFIG_ADJUST_P3",	132,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_CONFIG_ADJUST_P3},
    {CONFIG_ADJUST_P4,	"CONFIG_ADJUST_P4",	132,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_CONFIG_ADJUST_P4},
    {CONFIG_ADJUST_P5,	"CONFIG_ADJUST_P5",	132,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_CONFIG_ADJUST_P5},
    {CONFIG_ADJUST_P6,	"CONFIG_ADJUST_P6",	132,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_CONFIG_ADJUST_P6},
    {RADIO_SETUP,	"RADIO_SETUP",		128,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_RADIO_SETUP},
    {RADIO_THRO_CH,	"RADIO_THRO_CH",	117,	AQ_TYPE_U8,	0,	0,		54,		DEFAULT_RADIO_THRO_CH},
    {RADIO_ROLL_CH,	"RADIO_ROLL_CH",	117,	AQ_TYPE_U8,	0,	0,		54,		DEFAULT_RADIO_ROLL_CH},
    {RADIO_PITC_CH,	"RADIO_PITC_CH",	117,	AQ_TYPE_U8,	0,	0,		54,		DEFAULT_RADIO_PITC_CH},
    {RADIO_RUDD_CH,	"RADIO_RUDD_CH",	117,	AQ_TYPE_U8,	0,	0,		54,		DEFAULT_RADIO_RUDD_CH},
    {PPM_SCALER,	"PPM_SCALER",		117,	AQ_TYPE_FLT,	0,	0.01f,		FLT_MAX,	DEFAULT_PPM_SCALER},
    {PPM_THROT_LOW,	"PPM_THROT_LOW",	117,	AQ_TYPE_U16,	0,	750,		2500,		DEFAULT_PPM_THROT_LOW},
    {PPM_CHAN_MID,	"PPM_CHAN_MID",		117,	AQ_TYPE_U16,	0,	750,		2500,		DEFAULT_PPM_CHAN_MID},
    {CTRL_PID_TYPE,	"CTRL_PID_TYPE",	117,	AQ_TYPE_U8,	0,	0,		1,		DEFAULT_CTRL_PID_TYPE},
    {CTRL_FACT_THRO,	"CTRL_FACT_THRO",	117,	AQ_TYPE_FLT,	1,	0.1f,		2.0f,		DEFAULT_CTRL_FACT_THRO},
    {CTRL_FACT_PITC,	"CTRL_FACT_PITC",	117,	AQ_TYPE_FLT,	0,	0,		FLT_MAX,	DEFAULT_CTRL_FACT_PITC},
    {CTRL_FACT_ROLL,	"CTRL_FACT_ROLL",	117,	AQ_TYPE_FLT,	0,	0,		FLT_MAX,	DEFAULT_CTRL_FACT_ROLL},
    {CTRL_MAN_YAW_RT,	"CTRL_MAN_YAW_RT",	117,	AQ_TYPE_FLT,	1,	1.0f,		3600.0f,	DEFAULT_CTRL_MAN_YAW_RT},
    {CTRL_DEAD_BAND,	"CTRL_DEAD_BAND",	117,	AQ_TYPE_U16,	0,	0,		700,		DEFAULT_CTRL_DEAD_BAND},
    {CTRL_DBAND_THRO,	"CTRL_DBAND_THRO",	117,	AQ_TYPE_U16,	0,	0,		700,		DEFAULT_CTRL_DBAND_THRO},
    {CTRL_DBAND_SWTCH,	"CTRL_DBAND_SWTCH",	129,	AQ_TYPE_U16,	0,	0,		700,		DEFAULT_CTRL_DBAND_SWTCH},
    {CTRL_MIN_THROT,	"CTRL_MIN_THROT",	117,	AQ_TYPE_U16,	0,	0,		1400,		DEFAULT_CTRL_MIN_THROT},
    {CTRL_MAX,		"CTRL_MAX",		117,	AQ_TYPE_U16,	0,	0,		4095,		DEFAULT_CTRL_MAX},
    {CTRL_NAV_YAW_RT,	"CTRL_NAV_YAW_RT",	117,	AQ_TYPE_FLT,	1,	0,		3600.0f,	DEFAULT_CTRL_NAV_YAW_RT},
    {CTRL_TLT_RTE_P,	"CTRL_TLT_RTE_P",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_RTE_P},
    {CTRL_TLT_RTE_I,	"CTRL_TLT_RTE_I",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_RTE_I},
    {CTRL_TLT_RTE_D,	"CTRL_TLT_RTE_D",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_RTE_D},
    {CTRL_TLT_RTE_F,	"CTRL_TLT_RTE_F",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_RTE_F},
    {CTRL_TLT_RTE_PM,	"CTRL_TLT_RTE_PM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_RTE_PM},
    {CTRL_TLT_RTE_IM,	"CTRL_TLT_RTE_IM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_RTE_IM},
    {CTRL_TLT_RTE_DM,	"CTRL_TLT_RTE_DM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_RTE_DM},
    {CTRL_TLT_RTE_OM,	"CTRL_TLT_RTE_OM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_RTE_OM},
    {CTRL_YAW_RTE_P,	"CTRL_YAW_RTE_P",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_RTE_P},
    {CTRL_YAW_RTE_I,	"CTRL_YAW_RTE_I",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_RTE_I},
    {CTRL_YAW_RTE_D,	"CTRL_YAW_RTE_D",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_RTE_D},
    {CTRL_YAW_RTE_F,	"CTRL_YAW_RTE_F",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_RTE_F},
    {CTRL_YAW_RTE_PM,	"CTRL_YAW_RTE_PM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_RTE_PM},
    {CTRL_YAW_RTE_IM,	"CTRL_YAW_RTE_IM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_RTE_IM},
    {CTRL_YAW_RTE_DM,	"CTRL_YAW_RTE_DM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_RTE_DM},
    {CTRL_YAW_RTE_OM,	"CTRL_YAW_RTE_OM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_RTE_OM},
    {CTRL_TLT_ANG_P,	"CTRL_TLT_ANG_P",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_ANG_P},
    {CTRL_TLT_ANG_I,	"CTRL_TLT_ANG_I",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_ANG_I},
    {CTRL_TLT_ANG_D,	"CTRL_TLT_ANG_D",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_ANG_D},
    {CTRL_TLT_ANG_F,	"CTRL_TLT_ANG_F",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_ANG_F},
    {CTRL_TLT_ANG_PM,	"CTRL_TLT_ANG_PM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_ANG_PM},
    {CTRL_TLT_ANG_IM,	"CTRL_TLT_ANG_IM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_ANG_IM},
    {CTRL_TLT_ANG_DM,	"CTRL_TLT_ANG_DM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_ANG_DM},
    {CTRL_TLT_ANG_OM,	"CTRL_TLT_ANG_OM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_TLT_ANG_OM},
    {CTRL_YAW_ANG_P,	"CTRL_YAW_ANG_P",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_ANG_P},
    {CTRL_YAW_ANG_I,	"CTRL_YAW_ANG_I",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_ANG_I},
    {CTRL_YAW_ANG_D,	"CTRL_YAW_ANG_D",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_ANG_D},
    {CTRL_YAW_ANG_F,	"CTRL_YAW_ANG_F",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_ANG_F},
    {CTRL_YAW_ANG_PM,	"CTRL_YAW_ANG_PM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_ANG_PM},
    {CTRL_YAW_ANG_IM,	"CTRL_YAW_ANG_IM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_ANG_IM},
    {CTRL_YAW_ANG_DM,	"CTRL_YAW_ANG_DM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_ANG_DM},
    {CTRL_YAW_ANG_OM,	"CTRL_YAW_ANG_OM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_CTRL_YAW_ANG_OM},
    {MOT_CANL,		"MOT_CANL",		117,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_MOT_CANL},
    {MOT_CANH,		"MOT_CANH",		117,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_MOT_CANH},
    {MOT_FRAME,		"MOT_FRAME",		117,	AQ_TYPE_FLT,	0,	0,		FLT_MAX,	DEFAULT_MOT_FRAME},
    {MOT_ARM,		"MOT_ARM",		117,	AQ_TYPE_U32,	0,	0,		2500,		DEFAULT_MOT_ARM},
    {MOT_MIN,		"MOT_MIN",		117,	AQ_TYPE_U32,	0,	0,		2500,		DEFAULT_MOT_MIN},
    {MOT_START,		"MOT_START",		117,	AQ_TYPE_U32,	0,	0,		2500,		DEFAULT_MOT_START},
    {MOT_VALUE2T_A1,	"MOT_VALUE2T_A1",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_VALUE2T_A1},
    {MOT_VALUE2T_A2,	"MOT_VALUE2T_A2",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_VALUE2T_A2},
    {MOT_VALUE_SCAL,	"MOT_VALUE_SCAL",	117,	AQ_TYPE_FLT,	0,	0,		FLT_MAX,	DEFAULT_MOT_VALUE_SCAL},
    {MOT_MAX,		"MOT_MAX",		117,	AQ_TYPE_U32,	0,	0,		2500,		DEFAULT_MOT_MAX},
    {MOT_ESC_TYPE,	"MOT_ESC_TYPE",		131,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_MOT_ESC_TYPE},
    {MOT_PWRD_01_T,	"MOT_PWRD_01_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_01_T},
    {MOT_PWRD_01_P,	"MOT_PWRD_01_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_01_P},
    {MOT_PWRD_01_R,	"MOT_PWRD_01_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_01_R},
    {MOT_PWRD_01_Y,	"MOT_PWRD_01_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_01_Y},
    {MOT_PWRD_02_T,	"MOT_PWRD_02_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_02_T},
    {MOT_PWRD_02_P,	"MOT_PWRD_02_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_02_P},
    {MOT_PWRD_02_R,	"MOT_PWRD_02_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_02_R},
    {MOT_PWRD_02_Y,	"MOT_PWRD_02_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_02_Y},
    {MOT_PWRD_03_T,	"MOT_PWRD_03_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_03_T},
    {MOT_PWRD_03_P,	"MOT_PWRD_03_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_03_P},
    {MOT_PWRD_03_R,	"MOT_PWRD_03_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_03_R},
    {MOT_PWRD_03_Y,	"MOT_PWRD_03_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_03_Y},
    {MOT_PWRD_04_T,	"MOT_PWRD_04_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_04_T},
    {MOT_PWRD_04_P,	"MOT_PWRD_04_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_04_P},
    {MOT_PWRD_04_R,	"MOT_PWRD_04_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_04_R},
    {MOT_PWRD_04_Y,	"MOT_PWRD_04_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_04_Y},
    {MOT_PWRD_05_T,	"MOT_PWRD_05_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_05_T},
    {MOT_PWRD_05_P,	"MOT_PWRD_05_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_05_P},
    {MOT_PWRD_05_R,	"MOT_PWRD_05_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_05_R},
    {MOT_PWRD_05_Y,	"MOT_PWRD_05_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_05_Y},
    {MOT_PWRD_06_T,	"MOT_PWRD_06_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_06_T},
    {MOT_PWRD_06_P,	"MOT_PWRD_06_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_06_P},
    {MOT_PWRD_06_R,	"MOT_PWRD_06_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_06_R},
    {MOT_PWRD_06_Y,	"MOT_PWRD_06_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_06_Y},
    {MOT_PWRD_07_T,	"MOT_PWRD_07_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_07_T},
    {MOT_PWRD_07_P,	"MOT_PWRD_07_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_07_P},
    {MOT_PWRD_07_R,	"MOT_PWRD_07_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_07_R},
    {MOT_PWRD_07_Y,	"MOT_PWRD_07_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_07_Y},
    {MOT_PWRD_08_T,	"MOT_PWRD_08_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_08_T},
    {MOT_PWRD_08_P,	"MOT_PWRD_08_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_08_P},
    {MOT_PWRD_08_R,	"MOT_PWRD_08_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_08_R},
    {MOT_PWRD_08_Y,	"MOT_PWRD_08_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_08_Y},
    {MOT_PWRD_09_T,	"MOT_PWRD_09_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_09_T},
    {MOT_PWRD_09_P,	"MOT_PWRD_09_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_09_P},
    {MOT_PWRD_09_R,	"MOT_PWRD_09_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_09_R},
    {MOT_PWRD_09_Y,	"MOT_PWRD_09_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_09_Y},
    {MOT_PWRD_10_T,	"MOT_PWRD_10_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_10_T},
    {MOT_PWRD_10_P,	"MOT_PWRD_10_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_10_P},
    {MOT_PWRD_10_R,	"MOT_PWRD_10_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_10_R},
    {MOT_PWRD_10_Y,	"MOT_PWRD_10_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_10_Y},
    {MOT_PWRD_11_T,	"MOT_PWRD_11_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_11_T},
    {MOT_PWRD_11_P,	"MOT_PWRD_11_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_11_P},
    {MOT_PWRD_11_R,	"MOT_PWRD_11_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_11_R},
    {MOT_PWRD_11_Y,	"MOT_PWRD_11_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_11_Y},
    {MOT_PWRD_12_T,	"MOT_PWRD_12_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_12_T},
    {MOT_PWRD_12_P,	"MOT_PWRD_12_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_12_P},
    {MOT_PWRD_12_R,	"MOT_PWRD_12_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_12_R},
    {MOT_PWRD_12_Y,	"MOT_PWRD_12_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_12_Y},
    {MOT_PWRD_13_T,	"MOT_PWRD_13_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_13_T},
    {MOT_PWRD_13_P,	"MOT_PWRD_13_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_13_P},
    {MOT_PWRD_13_R,	"MOT_PWRD_13_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_13_R},
    {MOT_PWRD_13_Y,	"MOT_PWRD_13_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_13_Y},
    {MOT_PWRD_14_T,	"MOT_PWRD_14_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_14_T},
    {MOT_PWRD_14_P,	"MOT_PWRD_14_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_14_P},
    {MOT_PWRD_14_R,	"MOT_PWRD_14_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_14_R},
    {MOT_PWRD_14_Y,	"MOT_PWRD_14_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_14_Y},
    {MOT_PWRD_15_T,	"MOT_PWRD_15_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_15_T},
    {MOT_PWRD_15_P,	"MOT_PWRD_15_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_15_P},
    {MOT_PWRD_15_R,	"MOT_PWRD_15_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_15_R},
    {MOT_PWRD_15_Y,	"MOT_PWRD_15_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_15_Y},
    {MOT_PWRD_16_T,	"MOT_PWRD_16_T",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_16_T},
    {MOT_PWRD_16_P,	"MOT_PWRD_16_P",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_16_P},
    {MOT_PWRD_16_R,	"MOT_PWRD_16_R",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_16_R},
    {MOT_PWRD_16_Y,	"MOT_PWRD_16_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_MOT_PWRD_16_Y},
    {COMM_BAUD1,	"COMM_BAUD1",		117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_COMM_BAUD1},
    {COMM_BAUD2,	"COMM_BAUD2",		117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_COMM_BAUD2},
    {COMM_BAUD3,	"COMM_BAUD3",		117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_COMM_BAUD3},
    {COMM_BAUD4,	"COMM_BAUD4",		117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_COMM_BAUD4},
    {COMM_BAUD5,	"COMM_BAUD5",		117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_COMM_BAUD5},
    {COMM_BAUD6,	"COMM_BAUD6",		117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_COMM_BAUD6},
    {COMM_BAUD7,	"COMM_BAUD7",		117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_COMM_BAUD7},
    {COMM_STREAM_TYP1,	"COMM_STREAM_TYP1",	117,	AQ_TYPE_U8,	0,	0,		0xFF,		DEFAULT_COMM_STREAM_TYP1},
    {COMM_STREAM_TYP2,	"COMM_STREAM_TYP2",	117,	AQ_TYPE_U8,	0,	0,		0xFF,		DEFAULT_COMM_STREAM_TYP2},
    {COMM_STREAM_TYP3,	"COMM_STREAM_TYP3",	117,	AQ_TYPE_U8,	0,	0,		0xFF,		DEFAULT_COMM_STREAM_TYP3},
    {COMM_STREAM_TYP4,	"COMM_STREAM_TYP4",	117,	AQ_TYPE_U8,	0,	0,		0xFF,		DEFAULT_COMM_STREAM_TYP4},
    {COMM_STREAM_TYP5,	"COMM_STREAM_TYP5",	117,	AQ_TYPE_U8,	0,	0,		0xFF,		DEFAULT_COMM_STREAM_TYP5},
    {COMM_STREAM_TYP6,	"COMM_STREAM_TYP6",	117,	AQ_TYPE_U8,	0,	0,		0xFF,		DEFAULT_COMM_STREAM_TYP6},
    {COMM_STREAM_TYP7,	"COMM_STREAM_TYP7",	117,	AQ_TYPE_U8,	0,	0,		0xFF,		DEFAULT_COMM_STREAM_TYP7},
    {TELEMETRY_RATE,	"TELEMETRY_RATE",	117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_TELEMETRY_RATE},
    {NAV_MAX_SPEED,	"NAV_MAX_SPEED",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_MAX_SPEED},
    {NAV_MAX_DECENT,	"NAV_MAX_DECENT",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_MAX_DECENT},
    {NAV_CEILING,	"NAV_CEILING",		117,	AQ_TYPE_FLT,	0,	0,		FLT_MAX,	DEFAULT_NAV_CEILING},
    {NAV_LANDING_VEL,	"NAV_LANDING_VEL",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_LANDING_VEL},
    {NAV_SPEED_P,	"NAV_SPEED_P",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_SPEED_P},
    {NAV_SPEED_I,	"NAV_SPEED_I",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_SPEED_I},
    {NAV_SPEED_PM,	"NAV_SPEED_PM",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_SPEED_PM},
    {NAV_SPEED_IM,	"NAV_SPEED_IM",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_SPEED_IM},
    {NAV_SPEED_OM,	"NAV_SPEED_OM",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_SPEED_OM},
    {NAV_DIST_P,	"NAV_DIST_P",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_DIST_P},
    {NAV_DIST_I,	"NAV_DIST_I",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_DIST_I},
    {NAV_DIST_PM,	"NAV_DIST_PM",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_DIST_PM},
    {NAV_DIST_IM,	"NAV_DIST_IM",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_DIST_IM},
    {NAV_DIST_OM,	"NAV_DIST_OM",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_DIST_OM},
    {NAV_ALT_SPED_P,	"NAV_ALT_SPED_P",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_ALT_SPED_P},
    {NAV_ALT_SPED_I,	"NAV_ALT_SPED_I",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_ALT_SPED_I},
    {NAV_ALT_SPED_PM,	"NAV_ALT_SPED_PM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_ALT_SPED_PM},
    {NAV_ALT_SPED_IM,	"NAV_ALT_SPED_IM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_ALT_SPED_IM},
    {NAV_ALT_SPED_OM,	"NAV_ALT_SPED_OM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_ALT_SPED_OM},
    {NAV_ALT_POS_P,	"NAV_ALT_POS_P",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_ALT_POS_P},
    {NAV_ALT_POS_I,	"NAV_ALT_POS_I",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_ALT_POS_I},
    {NAV_ALT_POS_PM,	"NAV_ALT_POS_PM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_ALT_POS_PM},
    {NAV_ALT_POS_IM,	"NAV_ALT_POS_IM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_ALT_POS_IM},
    {NAV_ALT_POS_OM,	"NAV_ALT_POS_OM",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_NAV_ALT_POS_OM},
    {NAV_ALT_GPS_ACC,	"NAV_ALT_GPS_ACC",	117,	AQ_TYPE_FLT,	0,	0,		FLT_MAX,	DEFAULT_NAV_ALT_GPS_ACC},
    {NAV_CTRL_AH,	"NAV_CTRL_AH",		129,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_NAV_CTRL_AH},
    {NAV_CTRL_PH,	"NAV_CTRL_PH",		129,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_NAV_CTRL_PH},
    {NAV_CTRL_MISN,	"NAV_CTRL_MISN",	129,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_NAV_CTRL_MISN},
    {NAV_CTRL_HOM_SET,	"NAV_CTRL_HOM_SET",	129,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_NAV_CTRL_HOM_SET},
    {NAV_CTRL_HOM_GO,	"NAV_CTRL_HOM_GO",	129,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_NAV_CTRL_HOM_GO},
    {NAV_CTRL_HF_SET,	"NAV_CTRL_HF_SET",	129,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_NAV_CTRL_HF_SET},
    {NAV_CTRL_HF_LOCK,	"NAV_CTRL_HF_LOCK",	129,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_NAV_CTRL_HF_LOCK},
    {NAV_CTRL_WP_REC,	"NAV_CTRL_WP_REC",	130,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_NAV_CTRL_WP_REC},
    {IMU_ROT,		"IMU_ROT",		117,	AQ_TYPE_FLT,	0,	-360.0f,	360.0f,		DEFAULT_IMU_ROT},
    {IMU_FLIP,		"IMU_FLIP",		117,	AQ_TYPE_U8,	0,	0,		2,		DEFAULT_IMU_FLIP},
    {IMU_ACC_BIAS_X,	"IMU_ACC_BIAS_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS_X},
    {IMU_ACC_BIAS_Y,	"IMU_ACC_BIAS_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS_Y},
    {IMU_ACC_BIAS_Z,	"IMU_ACC_BIAS_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS_Z},
    {IMU_ACC_BIAS1_X,	"IMU_ACC_BIAS1_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS1_X},
    {IMU_ACC_BIAS1_Y,	"IMU_ACC_BIAS1_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS1_Y},
    {IMU_ACC_BIAS1_Z,	"IMU_ACC_BIAS1_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS1_Z},
    {IMU_ACC_BIAS2_X,	"IMU_ACC_BIAS2_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS2_X},
    {IMU_ACC_BIAS2_Y,	"IMU_ACC_BIAS2_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS2_Y},
    {IMU_ACC_BIAS2_Z,	"IMU_ACC_BIAS2_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS2_Z},
    {IMU_ACC_BIAS3_X,	"IMU_ACC_BIAS3_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS3_X},
    {IMU_ACC_BIAS3_Y,	"IMU_ACC_BIAS3_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS3_Y},
    {IMU_ACC_BIAS3_Z,	"IMU_ACC_BIAS3_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_BIAS3_Z},
    {IMU_ACC_SCAL_X,	"IMU_ACC_SCAL_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL_X},
    {IMU_ACC_SCAL_Y,	"IMU_ACC_SCAL_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL_Y},
    {IMU_ACC_SCAL_Z,	"IMU_ACC_SCAL_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL_Z},
    {IMU_ACC_SCAL1_X,	"IMU_ACC_SCAL1_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL1_X},
    {IMU_ACC_SCAL1_Y,	"IMU_ACC_SCAL1_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL1_Y},
    {IMU_ACC_SCAL1_Z,	"IMU_ACC_SCAL1_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL1_Z},
    {IMU_ACC_SCAL2_X,	"IMU_ACC_SCAL2_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL2_X},
    {IMU_ACC_SCAL2_Y,	"IMU_ACC_SCAL2_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL2_Y},
    {IMU_ACC_SCAL2_Z,	"IMU_ACC_SCAL2_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL2_Z},
    {IMU_ACC_SCAL3_X,	"IMU_ACC_SCAL3_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL3_X},
    {IMU_ACC_SCAL3_Y,	"IMU_ACC_SCAL3_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL3_Y},
    {IMU_ACC_SCAL3_Z,	"IMU_ACC_SCAL3_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_SCAL3_Z},
    {IMU_ACC_ALGN_XY,	"IMU_ACC_ALGN_XY",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_ALGN_XY},
    {IMU_ACC_ALGN_XZ,	"IMU_ACC_ALGN_XZ",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_ALGN_XZ},
    {IMU_ACC_ALGN_YX,	"IMU_ACC_ALGN_YX",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_ALGN_YX},
    {IMU_ACC_ALGN_YZ,	"IMU_ACC_ALGN_YZ",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_ALGN_YZ},
    {IMU_ACC_ALGN_ZX,	"IMU_ACC_ALGN_ZX",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_ALGN_ZX},
    {IMU_ACC_ALGN_ZY,	"IMU_ACC_ALGN_ZY",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_ACC_ALGN_ZY},
    {IMU_MAG_BIAS_X,	"IMU_MAG_BIAS_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS_X},
    {IMU_MAG_BIAS_Y,	"IMU_MAG_BIAS_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS_Y},
    {IMU_MAG_BIAS_Z,	"IMU_MAG_BIAS_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS_Z},
    {IMU_MAG_BIAS1_X,	"IMU_MAG_BIAS1_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS1_X},
    {IMU_MAG_BIAS1_Y,	"IMU_MAG_BIAS1_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS1_Y},
    {IMU_MAG_BIAS1_Z,	"IMU_MAG_BIAS1_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS1_Z},
    {IMU_MAG_BIAS2_X,	"IMU_MAG_BIAS2_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS2_X},
    {IMU_MAG_BIAS2_Y,	"IMU_MAG_BIAS2_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS2_Y},
    {IMU_MAG_BIAS2_Z,	"IMU_MAG_BIAS2_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS2_Z},
    {IMU_MAG_BIAS3_X,	"IMU_MAG_BIAS3_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS3_X},
    {IMU_MAG_BIAS3_Y,	"IMU_MAG_BIAS3_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS3_Y},
    {IMU_MAG_BIAS3_Z,	"IMU_MAG_BIAS3_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_BIAS3_Z},
    {IMU_MAG_SCAL_X,	"IMU_MAG_SCAL_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL_X},
    {IMU_MAG_SCAL_Y,	"IMU_MAG_SCAL_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL_Y},
    {IMU_MAG_SCAL_Z,	"IMU_MAG_SCAL_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL_Z},
    {IMU_MAG_SCAL1_X,	"IMU_MAG_SCAL1_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL1_X},
    {IMU_MAG_SCAL1_Y,	"IMU_MAG_SCAL1_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL1_Y},
    {IMU_MAG_SCAL1_Z,	"IMU_MAG_SCAL1_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL1_Z},
    {IMU_MAG_SCAL2_X,	"IMU_MAG_SCAL2_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL2_X},
    {IMU_MAG_SCAL2_Y,	"IMU_MAG_SCAL2_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL2_Y},
    {IMU_MAG_SCAL2_Z,	"IMU_MAG_SCAL2_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL2_Z},
    {IMU_MAG_SCAL3_X,	"IMU_MAG_SCAL3_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL3_X},
    {IMU_MAG_SCAL3_Y,	"IMU_MAG_SCAL3_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL3_Y},
    {IMU_MAG_SCAL3_Z,	"IMU_MAG_SCAL3_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_SCAL3_Z},
    {IMU_MAG_ALGN_XY,	"IMU_MAG_ALGN_XY",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_ALGN_XY},
    {IMU_MAG_ALGN_XZ,	"IMU_MAG_ALGN_XZ",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_ALGN_XZ},
    {IMU_MAG_ALGN_YX,	"IMU_MAG_ALGN_YX",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_ALGN_YX},
    {IMU_MAG_ALGN_YZ,	"IMU_MAG_ALGN_YZ",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_ALGN_YZ},
    {IMU_MAG_ALGN_ZX,	"IMU_MAG_ALGN_ZX",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_ALGN_ZX},
    {IMU_MAG_ALGN_ZY,	"IMU_MAG_ALGN_ZY",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_ALGN_ZY},
    {IMU_GYO_BIAS_X,	"IMU_GYO_BIAS_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS_X},
    {IMU_GYO_BIAS_Y,	"IMU_GYO_BIAS_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS_Y},
    {IMU_GYO_BIAS_Z,	"IMU_GYO_BIAS_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS_Z},
    {IMU_GYO_BIAS1_X,	"IMU_GYO_BIAS1_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS1_X},
    {IMU_GYO_BIAS1_Y,	"IMU_GYO_BIAS1_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS1_Y},
    {IMU_GYO_BIAS1_Z,	"IMU_GYO_BIAS1_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS1_Z},
    {IMU_GYO_BIAS2_X,	"IMU_GYO_BIAS2_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS2_X},
    {IMU_GYO_BIAS2_Y,	"IMU_GYO_BIAS2_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS2_Y},
    {IMU_GYO_BIAS2_Z,	"IMU_GYO_BIAS2_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS2_Z},
    {IMU_GYO_BIAS3_X,	"IMU_GYO_BIAS3_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS3_X},
    {IMU_GYO_BIAS3_Y,	"IMU_GYO_BIAS3_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS3_Y},
    {IMU_GYO_BIAS3_Z,	"IMU_GYO_BIAS3_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_BIAS3_Z},
    {IMU_GYO_SCAL_X,	"IMU_GYO_SCAL_X",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_SCAL_X},
    {IMU_GYO_SCAL_Y,	"IMU_GYO_SCAL_Y",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_SCAL_Y},
    {IMU_GYO_SCAL_Z,	"IMU_GYO_SCAL_Z",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_SCAL_Z},
    {IMU_GYO_ALGN_XY,	"IMU_GYO_ALGN_XY",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_ALGN_XY},
    {IMU_GYO_ALGN_XZ,	"IMU_GYO_ALGN_XZ",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_ALGN_XZ},
    {IMU_GYO_ALGN_YX,	"IMU_GYO_ALGN_YX",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_ALGN_YX},
    {IMU_GYO_ALGN_YZ,	"IMU_GYO_ALGN_YZ",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_ALGN_YZ},
    {IMU_GYO_ALGN_ZX,	"IMU_GYO_ALGN_ZX",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_ALGN_ZX},
    {IMU_GYO_ALGN_ZY,	"IMU_GYO_ALGN_ZY",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_GYO_ALGN_ZY},
    {IMU_MAG_INCL,	"IMU_MAG_INCL",		117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_INCL},
    {IMU_MAG_DECL,	"IMU_MAG_DECL",		117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_IMU_MAG_DECL},
    {IMU_PRESS_SENSE,	"IMU_PRESS_SENSE",	117,	AQ_TYPE_U8,	0,	0,		2,		DEFAULT_IMU_PRESS_SENSE},
    {GMBL_PITCH_PORT,	"GMBL_PITCH_PORT",	117,	AQ_TYPE_S8,	0,	-PWM_NUM_PORTS,	PWM_NUM_PORTS,	DEFAULT_GMBL_PITCH_PORT},
    {GMBL_ROLL_PORT,	"GMBL_ROLL_PORT",	117,	AQ_TYPE_S8,	0,	-PWM_NUM_PORTS,	PWM_NUM_PORTS,	DEFAULT_GMBL_ROLL_PORT},
    {GMBL_PWM_MAX_RL,	"GMBL_PWM_MAX_RL",	117,	AQ_TYPE_FLT,	0,	750.0f,		2500.0f,	DEFAULT_GMBL_PWM_MAX_RL},
    {GMBL_PWM_MIN_RL,	"GMBL_PWM_MIN_RL",	117,	AQ_TYPE_FLT,	0,	750.0f,		2500.0f,	DEFAULT_GMBL_PWM_MIN_RL},
    {GMBL_PWM_MAX_PT,	"GMBL_PWM_MAX_PT",	117,	AQ_TYPE_FLT,	0,	750.0f,		2500.0f,	DEFAULT_GMBL_PWM_MAX_PT},
    {GMBL_PWM_MIN_PT,	"GMBL_PWM_MIN_PT",	117,	AQ_TYPE_FLT,	0,	750.0f,		2500.0f,	DEFAULT_GMBL_PWM_MIN_PT},
    {GMBL_PWM_FREQ,	"GMBL_PWM_FREQ",	117,	AQ_TYPE_U16,	0,	0,		UINT16_MAX,	DEFAULT_GMBL_PWM_FREQ},
    {GMBL_NTRL_PITCH,	"GMBL_NTRL_PITCH",	117,	AQ_TYPE_FLT,	1,	750.0f,		2500.0f,	DEFAULT_GMBL_NTRL_PITCH},
    {GMBL_NTRL_ROLL,	"GMBL_NTRL_ROLL",	117,	AQ_TYPE_FLT,	1,	750.0f,		2500.0f,	DEFAULT_GMBL_NTRL_ROLL},
    {GMBL_SCAL_PITCH,	"GMBL_SCAL_PITCH",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_GMBL_SCAL_PITCH},
    {GMBL_SCAL_ROLL,	"GMBL_SCAL_ROLL",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_GMBL_SCAL_ROLL},
    {GMBL_SLEW_RATE,	"GMBL_SLEW_RATE",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_GMBL_SLEW_RATE},
    {GMBL_ROLL_EXPO,	"GMBL_ROLL_EXPO",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_GMBL_ROLL_EXPO},
    {GMBL_CTRL_TILT,	"GMBL_CTRL_TILT",	129,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_GMBL_CTRL_TILT},
    {GMBL_TILT_PORT,	"GMBL_TILT_PORT",	117,	AQ_TYPE_S8,	0,	-PWM_NUM_PORTS,	PWM_NUM_PORTS,	DEFAULT_GMBL_TILT_PORT},
    {GMBL_TRIG_PORT,	"GMBL_TRIG_PORT",	117,	AQ_TYPE_S8,	0,	-PWM_NUM_PORTS,	PWM_NUM_PORTS,	DEFAULT_GMBL_TRIG_PORT},
    {GMBL_CTRL_TRG_ON,	"GMBL_CTRL_TRG_ON",	129,	AQ_TYPE_U32,	0,	0,		0xFFFFFF,	DEFAULT_GMBL_CTRL_TRG_ON},
    {GMBL_TRIG_ON_PWM,	"GMBL_TRIG_ON_PWM",	117,	AQ_TYPE_FLT,	0,	750.0f,		2500.0f,	DEFAULT_GMBL_TRIG_ON_PWM},
    {GMBL_TRIG_ON_TIM,	"GMBL_TRIG_ON_TIM",	117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_GMBL_TRIG_ON_TIM},
    {GMBL_TRIG_DIST,	"GMBL_TRIG_DIST",	117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_GMBL_TRIG_DIST},
    {GMBL_TRIG_TIME,	"GMBL_TRIG_TIME",	117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_GMBL_TRIG_TIME},
    {GMBL_PSTHR_CHAN,	"GMBL_PSTHR_CHAN",	117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_GMBL_PSTHR_CHAN},
    {GMBL_PSTHR_PORT,	"GMBL_PSTHR_PORT",	117,	AQ_TYPE_S8,	0,	-PWM_NUM_PORTS,	PWM_NUM_PORTS,	DEFAULT_GMBL_PSTHR_PORT},
    {SPVR_LOW_BAT1,	"SPVR_LOW_BAT1",	117,	AQ_TYPE_FLT,	0,	0,		FLT_MAX,	DEFAULT_SPVR_LOW_BAT1},
    {SPVR_LOW_BAT2,	"SPVR_LOW_BAT2",	117,	AQ_TYPE_FLT,	0,	0,		FLT_MAX,	DEFAULT_SPVR_LOW_BAT2},
    {SPVR_FS_RAD_ST1,	"SPVR_FS_RAD_ST1",	117,	AQ_TYPE_U8,	0,	0,		0,		DEFAULT_SPVR_FS_RAD_ST1},
    {SPVR_FS_RAD_ST2,	"SPVR_FS_RAD_ST2",	117,	AQ_TYPE_U8,	0,	0,		2,		DEFAULT_SPVR_FS_RAD_ST2},
    {SPVR_FS_ADD_ALT,	"SPVR_FS_ADD_ALT",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_SPVR_FS_ADD_ALT},
    {SPVR_VIN_SOURCE,	"SPVR_VIN_SOURCE",	117,	AQ_TYPE_U8,	0,	0,		1,		DEFAULT_SPVR_VIN_SOURCE},
#ifdef HAS_QUATOS
    {QUATOS_ENABLE,	"QUATOS_ENABLE",	131,	AQ_TYPE_U8,	0,	0,		1,		DEFAULT_QUATOS_ENABLE},
    {QUATOS_J_ROLL,	"QUATOS_J_ROLL",	117,	AQ_TYPE_FLT,	1,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_J_ROLL},
    {QUATOS_J_PITCH,	"QUATOS_J_PITCH",	117,	AQ_TYPE_FLT,	1,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_J_PITCH},
    {QUATOS_J_YAW,	"QUATOS_J_YAW",		117,	AQ_TYPE_FLT,	1,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_J_YAW},
    {QUATOS_AM1,	"QUATOS_AM1",		117,	AQ_TYPE_FLT,	1,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_AM1},
    {QUATOS_AM2,	"QUATOS_AM2",		117,	AQ_TYPE_FLT,	1,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_AM2},
    {QUATOS_PROP_K1,	"QUATOS_PROP_K1",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_QUATOS_PROP_K1},
    {QUATOS_M_TLT_RT,	"QUATOS_M_TLT_RT",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_QUATOS_M_TLT_RT},
    {QUATOS_M_YAW_RT,	"QUATOS_M_YAW_RT",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_QUATOS_M_YAW_RT},
    {QUATOS_MAX_OUT,	"QUATOS_MAX_OUT",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_QUATOS_MAX_OUT},
    {QUATOS_QUAT_TAU,	"QUATOS_QUAT_TAU",	117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_QUATOS_QUAT_TAU},
    {QUATOS_L1_ASP,	"QUATOS_L1_ASP",	117,	AQ_TYPE_FLT,	1,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_L1_ASP},
    {QUATOS_L1_K1,	"QUATOS_L1_K1",		117,	AQ_TYPE_FLT,	1,	0,		FLT_MAX,	DEFAULT_QUATOS_L1_K1},
    {QUATOS_MM_R01,	"QUATOS_MM_R01",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R01},
    {QUATOS_MM_P01,	"QUATOS_MM_P01",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P01},
    {QUATOS_MM_Y01,	"QUATOS_MM_Y01",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y01},
    {QUATOS_MM_R02,	"QUATOS_MM_R02",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R02},
    {QUATOS_MM_P02,	"QUATOS_MM_P02",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P02},
    {QUATOS_MM_Y02,	"QUATOS_MM_Y02",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y02},
    {QUATOS_MM_R03,	"QUATOS_MM_R03",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R03},
    {QUATOS_MM_P03,	"QUATOS_MM_P03",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P03},
    {QUATOS_MM_Y03,	"QUATOS_MM_Y03",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y03},
    {QUATOS_MM_R04,	"QUATOS_MM_R04",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R04},
    {QUATOS_MM_P04,	"QUATOS_MM_P04",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P04},
    {QUATOS_MM_Y04,	"QUATOS_MM_Y04",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y04},
    {QUATOS_MM_R05,	"QUATOS_MM_R05",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R05},
    {QUATOS_MM_P05,	"QUATOS_MM_P05",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P05},
    {QUATOS_MM_Y05,	"QUATOS_MM_Y05",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y05},
    {QUATOS_MM_R06,	"QUATOS_MM_R06",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R06},
    {QUATOS_MM_P06,	"QUATOS_MM_P06",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P06},
    {QUATOS_MM_Y06,	"QUATOS_MM_Y06",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y06},
    {QUATOS_MM_R07,	"QUATOS_MM_R07",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R07},
    {QUATOS_MM_P07,	"QUATOS_MM_P07",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P07},
    {QUATOS_MM_Y07,	"QUATOS_MM_Y07",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y07},
    {QUATOS_MM_R08,	"QUATOS_MM_R08",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R08},
    {QUATOS_MM_P08,	"QUATOS_MM_P08",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P08},
    {QUATOS_MM_Y08,	"QUATOS_MM_Y08",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y08},
    {QUATOS_MM_R09,	"QUATOS_MM_R09",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R09},
    {QUATOS_MM_P09,	"QUATOS_MM_P09",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P09},
    {QUATOS_MM_Y09,	"QUATOS_MM_Y09",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y09},
    {QUATOS_MM_R10,	"QUATOS_MM_R10",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R10},
    {QUATOS_MM_P10,	"QUATOS_MM_P10",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P10},
    {QUATOS_MM_Y10,	"QUATOS_MM_Y10",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y10},
    {QUATOS_MM_R11,	"QUATOS_MM_R11",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R11},
    {QUATOS_MM_P11,	"QUATOS_MM_P11",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P11},
    {QUATOS_MM_Y11,	"QUATOS_MM_Y11",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y11},
    {QUATOS_MM_R12,	"QUATOS_MM_R12",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R12},
    {QUATOS_MM_P12,	"QUATOS_MM_P12",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P12},
    {QUATOS_MM_Y12,	"QUATOS_MM_Y12",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y12},
    {QUATOS_MM_R13,	"QUATOS_MM_R13",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R13},
    {QUATOS_MM_P13,	"QUATOS_MM_P13",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P13},
    {QUATOS_MM_Y13,	"QUATOS_MM_Y13",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y13},
    {QUATOS_MM_R14,	"QUATOS_MM_R14",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R14},
    {QUATOS_MM_P14,	"QUATOS_MM_P14",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P14},
    {QUATOS_MM_Y14,	"QUATOS_MM_Y14",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y14},
    {QUATOS_MM_R15,	"QUATOS_MM_R15",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R15},
    {QUATOS_MM_P15,	"QUATOS_MM_P15",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P15},
    {QUATOS_MM_Y15,	"QUATOS_MM_Y15",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y15},
    {QUATOS_MM_R16,	"QUATOS_MM_R16",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_R16},
    {QUATOS_MM_P16,	"QUATOS_MM_P16",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_P16},
    {QUATOS_MM_Y16,	"QUATOS_MM_Y16",	117,	AQ_TYPE_FLT,	0,	-FLT_MAX,	FLT_MAX,	DEFAULT_QUATOS_MM_Y16},
#endif
    {SIG_LED_1_PRT,	"SIG_LED_1_PRT",	117,	AQ_TYPE_S8,	0,	-PWM_NUM_PORTS,	PWM_NUM_PORTS,	DEFAULT_SIG_LED_1_PRT},
    {SIG_LED_2_PRT,	"SIG_LED_2_PRT",	117,	AQ_TYPE_S8,	0,	-PWM_NUM_PORTS,	PWM_NUM_PORTS,	DEFAULT_SIG_LED_2_PRT},
    {SIG_BEEP_PRT,	"SIG_BEEP_PRT",		117,	AQ_TYPE_S8,	0,	-PWM_NUM_PORTS,	PWM_NUM_PORTS,	DEFAULT_SIG_BEEP_PRT},
    {SIG_PWM_PRT,	"SIG_PWM_PRT",		117,	AQ_TYPE_S8,	0,	-PWM_NUM_PORTS,	PWM_NUM_PORTS,	DEFAULT_SIG_PWM_PRT},
    {LIC_KEY1,		"LIC_KEY1",		117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_LIC_KEY1},
    {LIC_KEY2,		"LIC_KEY2",		117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_LIC_KEY2},
    {LIC_KEY3,		"LIC_KEY3",		117,	AQ_TYPE_U32,	0,	0,		UINT32_MAX,	DEFAULT_LIC_KEY3},
//   ID			NAME			VER	TYPE		ADJ	MIN		MAX		DEFAULT
};


#endif /* _CONFIG_PARAMS_H_ */

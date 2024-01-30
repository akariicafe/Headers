@interface PLBBMav13HwMsgParser : PLMav7BasebandHardwareMessage

@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4[4]; unsigned int x5[2][16]; unsigned int x6[12]; unsigned int x7[1][4]; unsigned int x8[6]; unsigned int x9[6]; } *rfLTE;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; } *rpmData;
@property (nonatomic) struct { unsigned int x0[6]; } *appsPerf;
@property (nonatomic) struct { unsigned int x0; unsigned long long x1; } *appsSleep;
@property (nonatomic) struct { unsigned int x0[3]; } *pcieState;
@property (nonatomic) struct { unsigned int x0[2]; } *lpassState;
@property (nonatomic) struct { unsigned int x0[5]; } *appsSleepVeto;
@property (nonatomic) struct { unsigned int x0[17]; } *mpssSleepVeto;
@property (nonatomic) struct { unsigned int x0[12]; } *qdspSpeed;
@property (nonatomic) struct { unsigned int x0; unsigned long long x1; } *mpssSleep;
@property (nonatomic) struct { unsigned int x0[2]; } *gpsState;
@property (nonatomic) struct { unsigned int x0[2]; } *gpsDpoState;
@property (nonatomic) struct { unsigned int x0[6]; } *gpsDpoBins;
@property (nonatomic) struct { unsigned int x0[13]; } *mcpmSleepVeto;
@property (nonatomic) struct { unsigned int x0[6]; } *protocolActive;
@property (nonatomic) struct { unsigned int x0[16]; } *protocolState;
@property (nonatomic) struct { unsigned int x0[16]; } *protoStateC2K;
@property (nonatomic) struct { unsigned int x0[16]; } *protoStateHDR;
@property (nonatomic) struct { unsigned int x0[16]; } *protoStateGSM;
@property (nonatomic) struct { unsigned int x0[16]; } *protoStateWCDMA;
@property (nonatomic) struct { unsigned int x0[16]; } *protoStateLTE;
@property (nonatomic) struct { unsigned int x0[16]; } *protoStateTDS;
@property (nonatomic) char *optimMaskArray;
@property (nonatomic) struct { unsigned int x0[6][4]; unsigned int x1[6][13]; unsigned int x2[6][13]; unsigned int x3[6][12]; unsigned int x4[6][11]; unsigned int x5[6][11]; } *rfData;
@property (nonatomic) struct { unsigned int x0[4]; unsigned int x1[13]; unsigned int x2[13]; unsigned int x3[12]; unsigned int x4[11]; unsigned int x5[11]; } *rfDataC2K;
@property (nonatomic) struct { unsigned int x0[4]; unsigned int x1[13]; unsigned int x2[13]; unsigned int x3[12]; unsigned int x4[11]; unsigned int x5[11]; } *rfData1xEVDO;
@property (nonatomic) struct { unsigned int x0[4]; unsigned int x1[13]; unsigned int x2[13]; unsigned int x3[12]; unsigned int x4[11]; unsigned int x5[11]; } *rfDataGSM;
@property (nonatomic) struct { unsigned int x0[4]; unsigned int x1[13]; unsigned int x2[13]; unsigned int x3[11]; unsigned int x4[11]; } *rfDataWCDMA;
@property (nonatomic) struct { unsigned int x0[4]; unsigned int x1[13]; unsigned int x2[13]; unsigned int x3[12]; unsigned int x4[11]; unsigned int x5[11]; } *rfDataLTE;
@property (nonatomic) struct { unsigned int x0[4]; unsigned int x1[13]; unsigned int x2[13]; unsigned int x3[12]; unsigned int x4[11]; unsigned int x5[11]; } *rfDataTDS;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; } x2; struct { unsigned int x0[6]; } x3; } *rfEnhC2K;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; } x2; struct { unsigned int x0; unsigned int x1; } x3; struct { unsigned int x0; unsigned int x1; } x4; } *rfEnh1xEVDO;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2[3]; } *rfEnhGSM;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2[2][3]; unsigned int x3[2][4]; unsigned int x4[2]; unsigned int x5[4]; unsigned int x6[4]; unsigned int x7[12]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } *rfEnhWCDMA;
@property (nonatomic) struct { unsigned char x0[4]; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[4]; unsigned int x6[2][18]; unsigned int x7[12]; unsigned int x8[1][4]; unsigned int x9[3][8]; unsigned int x10[2][7]; unsigned int x11[2][6]; unsigned int x12[2][6]; unsigned int x13[5]; unsigned int x14[3]; unsigned long long x15[8]; } *rfEnhLTE;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2[7]; unsigned int x3[3]; } *rfEnhTDS;
@property (nonatomic) struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned int x3; unsigned short x4[4][6]; unsigned int x5[4][6]; } *rfEnhOOS;

+ (id)optimMaskMappings;

- (id)initWithData:(id)a0;
- (void)logWithLogger:(id)a0;
- (BOOL)parseData:(id)a0;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x0[4]; } *)a0 oftype:(int)a1 withData:(char *)a2;
- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x0[4]; } *)a0;
- (void)logAppsPerfWithLogger:(id)a0;
- (void)logHwRF1xWithLogger:(id)a0;
- (void)logHwRFEnhLTEWithLogger:(id)a0;
- (void)logHwRFEnhWCDMAWithLogger:(id)a0;
- (void)logHwRFGSMWithLogger:(id)a0;
- (void)logHwRFHDRWithLogger:(id)a0;
- (void)logHwRFOOSWithLogger:(id)a0;
- (void)logHwRFTDSWithLogger:(id)a0;
- (void)logLPASSWithLogger:(id)a0;
- (void)logLegacyRFWithLogger:(id)a0 usingData:(struct { unsigned int x0[4]; unsigned int x1[13]; unsigned int x2[13]; unsigned int x3[12]; unsigned int x4[11]; unsigned int x5[11]; } *)a1 forRAT:(unsigned int)a2;
- (void)logMPSSWithLogger:(id)a0;
- (void)logPcieWithLogger:(id)a0;
- (void)logPeripheralsWithLogger:(id)a0;
- (void)logProtocolOnlyWithLogger:(id)a0 forRAT:(unsigned int)a1;
- (void)logProtocolWithLogger:(id)a0 container:(id)a1 state:(struct { unsigned int x0[16]; } *)a2 forRAT:(unsigned int)a3;
- (void)logRPMWithLogger:(id)a0;
- (void)logSleepVetoWithLogger:(id)a0;

@end

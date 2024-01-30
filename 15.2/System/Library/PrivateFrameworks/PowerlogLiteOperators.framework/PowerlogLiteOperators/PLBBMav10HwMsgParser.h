@interface PLBBMav10HwMsgParser : PLMav7BasebandHardwareMessage

@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4[4]; unsigned int x5[2][16]; unsigned int x6[12]; unsigned int x7[1][4]; unsigned int x8[6]; unsigned int x9[6]; } *rfLTE;
@property (nonatomic) struct { unsigned char x0[4]; unsigned int x1; unsigned int x2; unsigned int x3[2][3]; unsigned int x4[2][4]; unsigned int x5[2]; unsigned int x6[4]; unsigned int x7[4]; unsigned int x8[12]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; } *rfWCDMA;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2[3]; } *rfGSM;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned int x2[7]; unsigned int x3[3]; } *rfTDS;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; } x2; struct { unsigned int x0[6]; } x3; } *rf1x;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; } x2; struct { unsigned int x0; unsigned int x1; } x3; struct { unsigned int x0; unsigned int x1; } x4; } *rfHDR;
@property (nonatomic) struct { unsigned short x0; unsigned int x1; unsigned int x2; unsigned char x3; unsigned short x4[4][6]; unsigned int x5[4][6]; } *rfOOS;
@property (nonatomic) struct { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; } *rpmNew;
@property (nonatomic) struct { unsigned int x0; unsigned long long x1; } *apps_sleepNew;
@property (nonatomic) struct { unsigned int x0; unsigned long long x1; } *mpss_sleepNew;
@property (nonatomic) struct { unsigned int x0[5]; } *appsNew;
@property (nonatomic) struct { unsigned int x0[9]; } *qdspNew;
@property (nonatomic) struct { unsigned int x0[12]; } *mcpm_sleep_vetoNew;

- (void)logHwRFOOSWithLogger:(id)a0;
- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x0[4]; } *)a0;
- (void)logHwRF1xWithLogger:(id)a0;
- (id)initWithData:(id)a0;
- (void)parseData:(id)a0;
- (void)logSleepVetoWithLogger:(id)a0;
- (void)logWithLogger:(id)a0;
- (void)logHwRFTDSWithLogger:(id)a0;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x0[4]; } *)a0 oftype:(int)a1 withData:(char *)a2;
- (void)logHwRFGSMWithLogger:(id)a0;
- (void)logMPSSWithLogger:(id)a0;
- (void)logRPMWithLogger:(id)a0;
- (void)logHwRFHDRWithLogger:(id)a0;
- (void)logAPPSWithLogger:(id)a0;
- (void)logHwRFLTEWithLogger:(id)a0;
- (void)logHwRFWCDMAWithLogger:(id)a0;

@end

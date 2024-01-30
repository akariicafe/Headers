@interface PLMav4BasebandHardwareMessage : PLBasebandHardwareMessage

@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x0[2]; } *usb;
@property (nonatomic) struct _PLMav4BasebandHWStatsMDSP { unsigned int x0[5]; } *mdsp;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x0[2]; } *mdm;
@property (nonatomic) struct _PLMav4BasebandHWStatsQDSP { unsigned int x0[5]; } *qdsp;
@property (nonatomic) struct _PLMav4BasebandHWStatsRX { unsigned int x0[5][4]; unsigned int x1[5][13]; unsigned int x2[5][13]; } *rx;
@property (nonatomic) struct _PLMav4BasebandHWStatsTX { unsigned int x0[5][12]; } *tx;
@property unsigned int logDuration;
@property (readonly, nonatomic) unsigned char level;
@property (readonly, nonatomic) unsigned short hw_rev;
@property (readonly, nonatomic) unsigned short sw_rev;
@property (nonatomic) struct _PLMav4BasebandHWStatsHeader { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; } *header;
@property (nonatomic) struct _PLMav4BasebandHWStatsSystem { unsigned int x0[3]; } *system;
@property (nonatomic) struct _PLMav4BasebandHWStatsARMPerf { unsigned int x0[8]; } *armPerf;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x0[2]; } *adm;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x0[2]; } *gps;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x0[2]; } *uart;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x0[2]; } *spi;
@property (nonatomic) struct _PLMav4BasebandHWSleepVeto { unsigned char x0[4][13]; } *sleep_qdsp;
@property (nonatomic) struct _PLMav4BasebandHWSleepVeto { unsigned char x0[4][13]; } *sleep_arm;

- (void)logWithLogger:(id)a0;
- (id)initWithData:(id)a0;
- (void)parseData:(id)a0;
- (void)logPeripheralsWithLogger:(id)a0;
- (void)logHeaderWithLogger:(id)a0;
- (void)logProcessorWithLogger:(id)a0;
- (void)logModemAppWithLogger:(id)a0;
- (void)logRFWithLogger2:(id)a0;
- (id)indexToRAT:(unsigned long long)a0;
- (void)logSleepWithLogger:(id)a0;

@end

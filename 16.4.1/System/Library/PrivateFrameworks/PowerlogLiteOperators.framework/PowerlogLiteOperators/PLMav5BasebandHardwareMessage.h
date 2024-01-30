@interface PLMav5BasebandHardwareMessage : PLMav4BasebandHardwareMessage {
    struct _PLMav5BasebandHWStatsSleep { unsigned int x0; unsigned int x1; } *_mav5_mpss_sleep;
    struct _PLMav5BasebandHWMPSSSleepVeto { unsigned int x0[3]; } *_mav5_mpss_sleep_veto;
}

@property (nonatomic) struct _PLMav5BasebandHWStatsRX { unsigned int x0[5][4]; unsigned int x1[5][13]; unsigned int x2[5][13]; } *rx;
@property (nonatomic) struct _PLMav5BasebandHWStatsTX { unsigned int x0[5][12]; } *tx;
@property (nonatomic) struct _PLMav5BasebandHWStatsRXSQA { unsigned int x0[5][11]; unsigned int x1[5][11]; } *rx_sqa;
@property (nonatomic) struct _PLMav5BasebandHWStatsProtocol { unsigned int x0[5][16]; } *protocol;
@property (nonatomic) struct _PLMav5BasebandHWClocksDuration { unsigned int x0[114]; unsigned int x1[95]; } *clock;
@property (nonatomic) struct _PLMav5BasebandHWStatsRPM { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *rpm;
@property (nonatomic) struct _PLMav5BasebandHWStatsAPPSPerf { unsigned int x0[6]; } *apps;
@property (nonatomic) struct _PLMav5BasebandHWAPPSSleepVeto { unsigned int x0[1]; } *apps_sleep_veto;
@property (nonatomic) struct _PLMav5BasebandHWStatsSleep { unsigned int x0; unsigned int x1; } *apps_sleep;
@property (nonatomic) struct _PLMav5BasebandHWStatsUSB { unsigned int x0[3]; } *usb;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x0[2]; } *lpass;
@property (nonatomic) struct _PLMav5BasebandHWMPSSSleepVeto { unsigned int x0[3]; } *mpss_sleep_veto;
@property (nonatomic) struct _PLMav5BasebandHWStatsSleep { unsigned int x0; unsigned int x1; } *mpss_sleep;
@property (nonatomic) struct _PLMav5BasebandHWStatsMDSP { unsigned int x0[10]; } *mdsp;
@property (nonatomic) struct _PLMav5BasebandHWStatsQDSP { unsigned int x0[10]; } *qdsp;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats { unsigned int x0[2]; } *gps_dpo;

- (id)initWithData:(id)a0;
- (void)logWithLogger:(id)a0;
- (BOOL)parseData:(id)a0;
- (void)formatDurationandCount:(unsigned int)a0 withCount:(unsigned int)a1 inString:(id)a2;
- (id)indexToRAT:(unsigned long long)a0;
- (void)logAPPSWithLogger:(id)a0;
- (void)logClockWithLogger:(id)a0;
- (void)logLPASSWithLogger:(id)a0;
- (void)logModemAppWithLogger:(id)a0;
- (void)logPeripheralsWithLogger:(id)a0;
- (void)logProtocolWithLogger:(id)a0 withCount:(unsigned int)a1;
- (void)logRFWithLogger2:(id)a0;
- (void)logRPMWithLogger:(id)a0;

@end

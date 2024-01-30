@class NSDate;

@interface WiFiUsageLQMKernelSampleRxAmpdu : WiFiUsageLQMSample

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long rxAmpdu;
@property (nonatomic) unsigned long long rxMpduDensity;
@property (nonatomic) unsigned long long rxBarOverRxAmpdu;
@property (nonatomic) unsigned long long rxQueuedOverRxAmpdu;
@property (nonatomic) unsigned long long rxAddBaReq;
@property (nonatomic) unsigned long long txAddBaResp;
@property (nonatomic) unsigned long long txDelBa;
@property (nonatomic) unsigned long long rxDelBa;
@property (nonatomic) unsigned long long rxAmpduAll;
@property (nonatomic) unsigned long long rxHoles;
@property (nonatomic) unsigned long long rxDup;
@property (nonatomic) unsigned long long rxStuck;
@property (nonatomic) unsigned long long rxOow;
@property (nonatomic) unsigned long long rxOos;
@property (nonatomic) double duration;

+ (id)featureFromFieldName:(id)a0;
+ (id)sampleWithStruct:(struct apple80211_rx_ampdu_lqmct_stats { unsigned int x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; } *)a0 WithReferenceDate:(id)a1 AsNsec:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithStruct:(struct apple80211_rx_ampdu_lqmct_stats { unsigned int x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; } *)a0 WithReferenceDate:(id)a1 AsNsec:(unsigned long long)a2;

@end

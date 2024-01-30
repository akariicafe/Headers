@interface WiFiUsageLQMTransformations : NSObject

@property (class, readonly, nonatomic) unsigned long long ratioScale;
@property (class, readonly, nonatomic) unsigned long long byteScale;
@property (class, readonly, nonatomic) unsigned long long mpduDensityScale;

+ (void)initialize;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })rxDecodingErrorsPercentagesWithRxFrmTooLong:(unsigned long long)a0 rxFrmTooShrt:(unsigned long long)a1 rxBadFCS:(unsigned long long)a2 rxResponseTimeout:(unsigned long long)a3 rxNoDelim:(unsigned long long)a4 rxAnyErr:(unsigned long long)a5 rxFifo0Ovfl:(unsigned long long)a6 rxFifo1Ovfl:(unsigned long long)a7;
+ (id)getBinMpduDensity:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)getBinNoise:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)getBinThroughput:(unsigned long long)a0 As:(unsigned long long)a1;
+ (unsigned long long)getMaxPhyrateWithNss:(unsigned long long)a0 Bw:(unsigned long long)a1 Phy:(unsigned long long)a2;
+ (unsigned long long)ratioWithValue:(unsigned long long)a0 Over:(unsigned long long)a1 WithScale:(unsigned long long)a2;
+ (id)getBinQueuedAmpdu:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)getBinRTT:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)getBinNetworkQualityResponsiveness:(unsigned long long)a0 As:(unsigned long long)a1;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })ccaStatsWithDuration:(unsigned long long)a0 ccaSelf:(unsigned long long)a1 ccaOther:(unsigned long long)a2 interference:(unsigned long long)a3;
+ (void)updateConfig;
+ (id)getBinEvery10Over100:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)getBinDecodingAttempts:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)getBinRetries:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)ofdmDesenseReason:(unsigned long long)a0;
+ (id)getBinBytesPerPacket:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)getBinForDouble:(double)a0 In:(id)a1 WithLowestEdge:(id)a2 As:(unsigned long long)a3;
+ (id)getBinFrames:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)getBinRssi:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)numberForKeyPath:(id)a0 ofObject:(id)a1;
+ (id)getBinTimeIntervalUpTo60s:(double)a0 As:(unsigned long long)a1;
+ (id)getBinTimeIntervalUpTo12h:(double)a0 As:(unsigned long long)a1;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })ratePercentagesWithTxRate:(unsigned long long)a0 rxRate:(unsigned long long)a1 txFallbackRate:(unsigned long long)a2 txFrames:(unsigned long long)a3 rxFrames:(unsigned long long)a4 nss:(unsigned long long)a5 bw:(unsigned long long)a6 phyMode:(unsigned long long)a7 band:(unsigned long long)a8 deviceMaxRate:(long long)a9;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })decodingAttemptsWithRxCrsGlitch:(unsigned long long)a0 rxBadPLCP:(unsigned long long)a1 RxBphyCrsGlitch:(unsigned long long)a2 rxBphyBadPLCP:(unsigned long long)a3 rxStart:(unsigned long long)a4;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; })txErrorsPercentagesWithtxSuccess:(unsigned long long)a0 txDropped:(unsigned long long)a1 txNoBuff:(unsigned long long)a2 txNoRes:(unsigned long long)a3 txNoAck:(unsigned long long)a4 txChipModeErr:(unsigned long long)a5 txExpired:(unsigned long long)a6 txFail:(unsigned long long)a7 txFwFree:(unsigned long long)a8 txMaxRetries:(unsigned long long)a9 txForceExpire:(unsigned long long)a10;
+ (id)getBinEvery10thOverRatioScale:(unsigned long long)a0 As:(unsigned long long)a1;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })rxUcastPercentagesWithRxData:(unsigned long long)a0 rxMgmt:(unsigned long long)a1 rxCtrl:(unsigned long long)a2;
+ (id)dateWithMachContinuousTime:(unsigned long long)a0 WithRef:(id)a1 asNS:(unsigned long long)a2;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })ctrlFrmsPercentagesWithRxCtrlUcast:(unsigned long long)a0 RTS:(unsigned long long)a1 CTS:(unsigned long long)a2 BACK:(unsigned long long)a3 ACK:(unsigned long long)a4;
+ (id)scanClient:(unsigned long long)a0;
+ (id)getBinForRoamingLatency:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)getBinBytesPerFrame:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)getBinSnr:(unsigned long long)a0 As:(unsigned long long)a1;

@end

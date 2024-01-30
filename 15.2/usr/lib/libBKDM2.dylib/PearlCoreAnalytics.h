@class PearlCoreAnalyticsDailyUpdateEvent, BiometricAutoBugCapture, AWDServerConnection;

@interface PearlCoreAnalytics : NSObject {
    AWDServerConnection *awdConnection;
    PearlCoreAnalyticsDailyUpdateEvent *_dailyEvent;
    BOOL _isInternalBuild;
}

@property (copy, nonatomic) id /* block */ analyticsPerformCommandBlock;
@property (retain, nonatomic) BiometricAutoBugCapture *pearlAbc;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)sendMatchEventAnalytics:(id)a0 orientation:(unsigned long long)a1 identities:(id)a2;
- (void)sendFaceDetectEventAnalytics:(id)a0 fromMatch:(BOOL)a1 orientation:(unsigned long long)a2;
- (void)sendEnrollEventAnalytics:(id)a0 orientation:(unsigned long long)a1;
- (void)sendPasscodeChallengeEventAnalytics:(id)a0 orientation:(unsigned long long)a1;
- (void)sendBioLockoutEventAnalytics:(id)a0;
- (void)getDailyUpdateAnalytics;
- (int)sequenceTypeToCaptureMethod:(unsigned char)a0 forSequence:(unsigned char)a1;
- (void)sendPearlAbcEvent:(unsigned long long)a0;
- (void)checkYogiError:(int)a0;
- (BOOL)postSimpleCoreAnalyticsEvent:(id)a0 fromAWDMetric:(id)a1;

@end

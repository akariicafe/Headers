@class PearlCoreAnalyticsDailyUpdateEvent, BiometricAutoBugCapture, AWDServerConnection;

@interface PearlCoreAnalytics : NSObject {
    AWDServerConnection *awdConnection;
    PearlCoreAnalyticsDailyUpdateEvent *_dailyEvent;
    BOOL _isInternalBuild;
}

@property (copy, nonatomic) id /* block */ analyticsPerformCommandBlock;
@property (retain, nonatomic) BiometricAutoBugCapture *pearlAbc;

+ (void)sendDisplayPearlGlassesBannerNotificationEvent;
+ (void)sendEnrollPearlGlassesBannerNotificationEvent;

- (BOOL)postSimpleCoreAnalyticsEvent:(id)a0 fromAWDMetric:(id)a1;
- (void)sendMatchEventAnalytics:(id)a0 orientation:(unsigned long long)a1 identities:(id)a2;
- (void)sendPearlAbcEvent:(unsigned long long)a0;
- (void)getDailyUpdateAnalytics;
- (void)sendPasscodeChallengeEventAnalytics:(id)a0 orientation:(unsigned long long)a1;
- (void)dealloc;
- (void)sendFaceDetectEventAnalytics:(id)a0 fromMatch:(BOOL)a1 orientation:(unsigned long long)a2;
- (void)sendEnrollEventAnalytics:(id)a0 orientation:(unsigned long long)a1;
- (id)init;
- (void)checkYogiError:(int)a0;
- (int)sequenceTypeToCaptureMethod:(unsigned char)a0 forSequence:(unsigned char)a1;
- (void)sendBioLockoutEventAnalytics:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;

@interface ATXDigestOnboardingAppSelectionMetrics : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *sessionUUID;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) unsigned long long avgNumBasicNotifications;
@property (nonatomic) unsigned long long avgNumMessageNotfications;
@property (nonatomic) unsigned long long avgNumTimeSensitiveNonMessageNotifications;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) BOOL addedToDigest;
@property (nonatomic) BOOL wasShownInDigestOnboarding;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;

@end

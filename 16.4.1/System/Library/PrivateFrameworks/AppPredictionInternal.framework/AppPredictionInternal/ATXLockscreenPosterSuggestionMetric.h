@class NSString;

@interface ATXLockscreenPosterSuggestionMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *extensionBundleId;
@property (nonatomic) unsigned long long section;
@property (nonatomic) BOOL outcome;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL engaged;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;

@end

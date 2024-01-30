@class NSString;

@interface ATXDigestOnboardingSuggestionMetrics : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *sessionUUID;
@property (retain, nonatomic) NSString *outcome;
@property (nonatomic) double timeToResolution;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;

@end

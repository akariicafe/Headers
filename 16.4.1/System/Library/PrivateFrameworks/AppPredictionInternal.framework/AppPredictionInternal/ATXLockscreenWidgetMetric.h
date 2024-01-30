@class NSString;

@interface ATXLockscreenWidgetMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *lockscreenId;
@property (copy, nonatomic) NSString *extensionBundleId;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) unsigned long long family;
@property (nonatomic) unsigned long long source;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;

@end

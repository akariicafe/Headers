@interface ATXLockscreenSummaryMetric : _ATXCoreAnalyticsMetric

@property (nonatomic) unsigned long long editingUiExperienced;

- (id)metricName;
- (id)coreAnalyticsDictionary;

@end

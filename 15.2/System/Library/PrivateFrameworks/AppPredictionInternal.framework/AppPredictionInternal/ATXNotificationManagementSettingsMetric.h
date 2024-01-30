@interface ATXNotificationManagementSettingsMetric : _ATXCoreAnalyticsMetric

@property (nonatomic) unsigned long long numDailyDigests;
@property (nonatomic) unsigned long long numDigestApps;
@property (nonatomic) unsigned long long numConfiguredModes;

- (id)metricName;
- (id)coreAnalyticsDictionary;

@end

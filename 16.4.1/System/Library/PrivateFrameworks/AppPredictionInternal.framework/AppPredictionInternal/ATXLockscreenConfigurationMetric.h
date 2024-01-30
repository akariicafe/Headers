@class NSString;

@interface ATXLockscreenConfigurationMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *lockscreenId;
@property (copy, nonatomic) NSString *extensionBundleId;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *font;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *numberingSystem;
@property (nonatomic) unsigned long long numWidgets;
@property (nonatomic) BOOL hasCustomInlineComplication;
@property (copy, nonatomic) NSString *relatedFocus;
@property (nonatomic) BOOL isSelected;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;

@end

@class NSString;

@interface ATXLockscreenEditMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *lockscreenId;
@property (copy, nonatomic) NSString *entryPoint;
@property (nonatomic) BOOL isNew;
@property (nonatomic) unsigned long long secondsSinceLastEdit;
@property (copy, nonatomic) NSString *outcome;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL userChangedColor;
@property (nonatomic) BOOL userChangedFont;
@property (nonatomic) BOOL userChangedNumberingSystem;
@property (nonatomic) BOOL userChangedPosterContent;
@property (nonatomic) BOOL userChangedWidgets;
@property (nonatomic) BOOL didLockscreenHaveWidgetsBeforeEdit;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;

@end

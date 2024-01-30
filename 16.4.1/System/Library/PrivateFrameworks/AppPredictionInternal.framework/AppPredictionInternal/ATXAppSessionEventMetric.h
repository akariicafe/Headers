@class NSString, NSNumber;

@interface ATXAppSessionEventMetric : _ATXCoreAnalyticsMetric

@property (readonly, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) NSNumber *appCategory;
@property (readonly, nonatomic) NSString *interruptingAppBundleId;
@property (readonly, nonatomic) NSNumber *interruptingAppCategory;
@property (readonly, nonatomic) double appSessionDuration;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (id)initWithDimensions:(id)a0 bundleId:(id)a1 interruptingAppBundleId:(id)a2 duration:(double)a3;

@end

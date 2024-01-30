@class _ATXCoreAnalyticsDimensionSet;

@interface _ATXCoreAnalyticsMetric : NSObject

@property (readonly, nonatomic) _ATXCoreAnalyticsDimensionSet *dimensionSet;

- (id)metricName;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDimensions:(id)a0;
- (void)logToCoreAnalytics;
- (id)coreAnalyticsDictionary;
- (id)coreAnalyticsDictionaryWithDimensions;

@end

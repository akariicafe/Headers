@class NSMutableDictionary, NSDictionary, NSString, NSNumber;

@interface HDClinicalIngestionResponseTimeMetric : NSObject <HDClinicalIngestionAnalyticsMetric>

@property (retain, nonatomic) NSMutableDictionary *elements;
@property (readonly, nonatomic) NSDictionary *collectedMetrics;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSNumber *analyticsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addResponseTimeMetricElement:(id)a0;
- (void)enumerateElementsAsCoreAnalyticsPayloadUsingBlock:(id /* block */)a0;
- (void)combineWithMetric:(id)a0;
- (void)resetMetric;

@end

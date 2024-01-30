@class NSMutableDictionary, NSDictionary, NSString, NSNumber;

@interface HDClinicalIngestionRequestFailureMetric : NSObject <HDClinicalIngestionAnalyticsMetric>

@property (retain, nonatomic) NSMutableDictionary *elements;
@property (retain, nonatomic) NSDictionary *collectedMetrics;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSNumber *analyticsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addRequestFailureMetricElement:(id)a0;
- (void)enumerateElementsAsCoreAnalyticsPayloadUsingBlock:(id /* block */)a0;
- (void)combineWithMetric:(id)a0;
- (void)resetMetric;

@end

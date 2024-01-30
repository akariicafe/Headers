@class NSString, NSMutableDictionary;

@interface HDClinicalContentAnalyticsUnknownRecordsMetric : NSObject <HDClinicalContentAnalyticsMetric> {
    NSMutableDictionary *_elements;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reportedHostFromSourceURL:(id)a0 resourceType:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateElementsAsCoreAnalyticsPayloadUsingBlock:(id /* block */)a0;
- (id)elements;
- (id)analyticsString;
- (void)resetMetric;
- (void)accumulateMetricForItem:(id)a0;
- (void)_addMetricElementsForRulesVersion:(long long)a0 sourceURL:(id)a1 resourceType:(id)a2 failureInfo:(id)a3;
- (void)addUnknownRecordsMetricElement:(id)a0;
- (long long)countForMetricElement:(id)a0;

@end

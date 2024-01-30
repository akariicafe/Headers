@interface TIMetricDescriptorParser : TIDescriptorParser

- (id)init;
- (void)parseMetricDescriptors:(id)a0 andInvalidMetricNames:(id)a1 fromConfig:(id)a2 errors:(id)a3;
- (id)descriptionFromDependencyChain:(id)a0 andDependencyName:(id)a1;
- (void)findInvalidDependencyChain:(id)a0 forMetricDescriptor:(id)a1 fromMetricDescriptors:(id)a2 andInvalidMetricNames:(id)a3 invalidMetricDescriptors:(id)a4 errors:(id)a5;
- (id)parseBucketThresholdsFromConfig:(id)a0 isFeatureUsageDescriptor:(BOOL)a1 errors:(id)a2;
- (id)parseBucketValuesFromConfig:(id)a0 forBucketThresholds:(id)a1 isFeatureUsageDescriptor:(BOOL)a2 errors:(id)a3;
- (id)parseCalculationDefaultValueFromConfig:(id)a0 forExpression:(id)a1 andPrecondition:(id)a2 errors:(id)a3;
- (id)parseCalculationDependenciesFromConfig:(id)a0 forExpression:(id)a1 errors:(id)a2;
- (id)parseCalculationPreconditionFromConfig:(id)a0 forExpression:(id)a1 errors:(id)a2;
- (id)parseContextValueDescriptorWithName:(id)a0 fromConfig:(id)a1 errors:(id)a2;
- (id)parseFeatureUsageDescriptorWithName:(id)a0 fromConfig:(id)a1 errors:(id)a2;
- (id)parseMetricDescriptorWithName:(id)a0 fromConfig:(id)a1 errors:(id)a2;
- (id)parseNumericValueDescriptorWithName:(id)a0 fromConfig:(id)a1 errors:(id)a2;
- (id)parseSettingValueDescriptorWithName:(id)a0 fromConfig:(id)a1 errors:(id)a2;

@end

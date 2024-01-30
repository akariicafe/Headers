@interface PGBirthdayMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator {
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
}

+ (id)supportedMeaningLabels;
+ (id)requiredFeatureRelation;

- (id)initWithMemoryGenerationContext:(id)a0;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;

@end

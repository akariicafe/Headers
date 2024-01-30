@interface PGBirthdayMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator {
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
}

+ (id)requiredFeatureRelation;
+ (id)supportedMeaningLabels;

- (id)initWithMemoryGenerationContext:(id)a0;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)a0;

@end

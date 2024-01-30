@class PGMemoryMomentRequirements;

@interface PGHolidayMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator {
    PGMemoryMomentRequirements *_momentRequirements;
}

+ (id)requiredFeatureRelation;
+ (id)supportedMeaningLabels;

- (void).cxx_destruct;
- (id)initWithMemoryGenerationContext:(id)a0;
- (id)momentRequirements;
- (void)setMomentRequirements:(id)a0;

@end

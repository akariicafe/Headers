@class PGMemoryMomentRequirements;

@interface PGPersonTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    BOOL _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements *_momentRequirements;
}

- (void).cxx_destruct;
- (id)childOnlyPersonTrends;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithMemoryGenerationContext:(id)a0 configurations:(id)a1;
- (BOOL)intersectRelevantAssetsForFeatures;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)momentRequirements;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)a0;
- (id)trendType;

@end

@class PGMemoryMomentRequirements;

@interface PGPersonTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    BOOL _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements *_momentRequirements;
}

- (void).cxx_destruct;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)initWithMemoryGenerationContext:(id)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (id)momentRequirements;
- (BOOL)intersectRelevantAssetsForFeatures;

@end

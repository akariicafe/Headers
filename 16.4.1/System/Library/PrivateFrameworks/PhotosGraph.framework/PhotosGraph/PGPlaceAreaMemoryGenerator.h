@class MABinaryAdjacency, PGOverTheYearsMemoryConfiguration, PGMemoryMomentRequirements, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGPlaceAreaMemoryGenerator : PGOverTimeMemoryGenerator {
    MABinaryAdjacency *_addressNodesByAreaNode;
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    PGMemoryMomentRequirements *_momentRequirements;
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
}

- (void).cxx_destruct;
- (id)_addressNodesByAreaNodeInGraph:(id)a0;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)a0;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)momentRequirements;
- (unsigned long long)numberOfRelevantAssetsForMomentNodes:(id)a0 featureNodes:(id)a1;
- (id)overTheYearsConfiguration;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (BOOL)requireSceneProcessingMeetsThresholdOverTime;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)a0;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;

@end

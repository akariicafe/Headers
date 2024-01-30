@class MABinaryAdjacency, PGOverTheYearsMemoryConfiguration, PGMemoryMomentRequirements, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGPlaceAreaMemoryGenerator : PGOverTimeMemoryGenerator {
    MABinaryAdjacency *_addressNodesByAreaNode;
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    PGMemoryMomentRequirements *_momentRequirements;
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
}

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (unsigned long long)durationForCuration;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 potentialMemory:(id)a1;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)initWithMemoryGenerationContext:(id)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)requireSceneProcessingMeetsThresholdOverTime;
- (id)momentRequirements;
- (id)overTheYearsConfiguration;
- (id)featuredYearConfiguration;
- (id)_addressNodesByAreaNodeInGraph:(id)a0;
- (unsigned long long)numberOfRelevantAssetsForMomentNodes:(id)a0 featureNodes:(id)a1;

@end

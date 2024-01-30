@class PGGraphMomentNodeCollection, NSMutableDictionary, PGOverTheYearsMemoryConfiguration, PGMemoryMomentRequirements, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGOverTimeMemoryGenerator : PGMemoryGenerator {
    PGGraphMomentNodeCollection *_interestingForMemoriesMomentNodes;
    NSMutableDictionary *_yearByYearNodeIdentifier;
}

@property (readonly, nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) BOOL intersectRelevantAssetsForFeatures;
@property (readonly, nonatomic) BOOL requireSceneProcessingMeetsThresholdOverTime;
@property (readonly, nonatomic) BOOL requireFaceProcessingMeetsThresholdOverTime;
@property (readonly, nonatomic) PGMemoryMomentRequirements *momentRequirements;
@property (readonly, nonatomic) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration;
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration;
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredSeasonConfiguration;

- (void).cxx_destruct;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)numberOfRelevantAssetsForMomentNodes:(id)a0 featureNodes:(id)a1;
- (id)generateAllPotentialMemoriesWithGraph:(id)a0 progressBlock:(id /* block */)a1;
- (id)allFeatureNodesForMemoryNodeWithFeatureNodes:(id)a0;
- (id)_filteredMomentNodesFromMomentNodes:(id)a0 featureNodes:(id)a1;
- (BOOL)_shouldCreateOverTheYearsMemoryForMomentNodes:(id)a0 featureNodes:(id)a1;
- (BOOL)_shouldCreateFeaturedTimePeriodMemoriesForMomentNodes:(id)a0 configuration:(id)a1;
- (BOOL)_shouldCreateFeaturedYearMemoryForMomentNodes:(id)a0 featureNodes:(id)a1 inYear:(long long)a2;
- (BOOL)_shouldCreateFeaturedSeasonMemoryForMomentNodes:(id)a0 featureNodes:(id)a1;
- (BOOL)_shouldCreateMemoryForMomentNodes:(id)a0 featureNodes:(id)a1 withConfiguration:(id)a2;
- (id)_interestingForMemoriesSubsetFromMomentNodes:(id)a0;
- (long long)_yearForYearNodeAsCollection:(id)a0;

@end

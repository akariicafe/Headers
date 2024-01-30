@class PGGraphMomentNodeCollection, NSMutableDictionary, PGOverTheYearsMemoryConfiguration, PGMemoryMomentRequirements, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGOverTimeMemoryGenerator : PGMemoryGenerator {
    PGGraphMomentNodeCollection *_interestingForMemoriesMomentNodes;
    NSMutableDictionary *_yearByYearNodeIdentifier;
}

@property (readonly, nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) BOOL intersectRelevantAssetsForFeatures;
@property (nonatomic) BOOL requireSceneProcessingMeetsThresholdOverTime;
@property (nonatomic) BOOL requireFaceProcessingMeetsThresholdOverTime;
@property (nonatomic) unsigned long long minimumSceneAnalysisVersion;
@property (nonatomic) unsigned long long minimumNumberOfDefaultMemories;
@property (readonly, nonatomic) PGMemoryMomentRequirements *momentRequirements;
@property (readonly, nonatomic) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration;
@property (readonly, nonatomic) PGOverTheYearsMemoryConfiguration *fallbackOverTheYearsConfiguration;
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration;
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *fallbackFeaturedYearConfiguration;
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredSeasonConfiguration;

- (void).cxx_destruct;
- (id)_filteredMomentNodesFromMomentNodes:(id)a0 featureNodes:(id)a1;
- (id)_interestingForMemoriesSubsetFromMomentNodes:(id)a0;
- (BOOL)_shouldCreateFeaturedSeasonMemoryForMomentNodes:(id)a0 featureNodes:(id)a1;
- (BOOL)_shouldCreateFeaturedTimePeriodMemoriesForMomentNodes:(id)a0 configuration:(id)a1;
- (BOOL)_shouldCreateFeaturedYearMemoryForMomentNodes:(id)a0 featureNodes:(id)a1 inYear:(long long)a2 configuration:(id)a3;
- (BOOL)_shouldCreateMemoryForMomentNodes:(id)a0 featureNodes:(id)a1 withConfiguration:(id)a2;
- (BOOL)_shouldCreateOverTheYearsMemoryForMomentNodes:(id)a0 featureNodes:(id)a1 configuration:(id)a2;
- (long long)_yearForYearNodeAsCollection:(id)a0;
- (id)allFeatureNodesForMemoryNodeWithFeatureNodes:(id)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)generateAllPotentialMemoriesWithGraph:(id)a0 progressBlock:(id /* block */)a1;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (unsigned long long)numberOfRelevantAssetsForMomentNodes:(id)a0 featureNodes:(id)a1;

@end

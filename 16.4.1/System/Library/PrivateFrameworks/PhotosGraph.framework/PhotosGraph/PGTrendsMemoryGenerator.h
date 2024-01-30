@class PGGraphMomentNodeCollection, NSArray, PGOverTheYearsMemoryConfiguration, PGFeaturedTimePeriodMemoryConfiguration, PGGraphSceneFeatureNodeCollection, PGMemoryMomentRequirements;

@interface PGTrendsMemoryGenerator : PGOverTimeMemoryGenerator {
    PGGraphSceneFeatureNodeCollection *_allTrendsSceneFeatureNodesInGraph;
    PGGraphMomentNodeCollection *_winterSportMomentNodes;
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    unsigned long long _minimumNumberOfDefaultMemories;
    PGMemoryMomentRequirements *_momentRequirements;
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;
    PGOverTheYearsMemoryConfiguration *_fallbackOverTheYearsConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_fallbackFeaturedYearConfiguration;
}

@property (readonly, nonatomic) NSArray *configurations;

+ (id)allTrendSceneFeatureLabels;
+ (id)trendsConfigurations;

- (void).cxx_destruct;
- (id)_trendSceneFeatureLabelsToRequireKnownPeopleInCuration;
- (id)allTrendSceneFeatureNodesInGraph:(id)a0;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)fallbackFeaturedYearConfiguration;
- (id)fallbackOverTheYearsConfiguration;
- (id)featuredYearConfiguration;
- (id)filteredMomentNodes:(id)a0 withSceneLabel:(id)a1 inGraph:(id)a2;
- (id)initWithMemoryGenerationContext:(id)a0 configurations:(id)a1;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (unsigned long long)minimumNumberOfDefaultMemories;
- (id)momentRequirements;
- (id)overTheYearsConfiguration;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (BOOL)requireSceneProcessingMeetsThresholdOverTime;
- (void)setMinimumNumberOfDefaultMemories:(unsigned long long)a0;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)a0;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)a0;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)trendType;
- (id)validSceneFeatureNodesInGraph:(id)a0;

@end

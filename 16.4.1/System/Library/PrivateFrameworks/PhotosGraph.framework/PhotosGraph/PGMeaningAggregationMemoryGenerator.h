@class PGMemoryMomentRequirements, PGOverTheYearsMemoryConfiguration, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGMeaningAggregationMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
}

@property (retain, nonatomic) PGMemoryMomentRequirements *momentRequirements;
@property (retain, nonatomic) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration;
@property (retain, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration;

+ (unsigned long long)_extendedMeaningForActivityEvent:(id)a0;
+ (unsigned long long)_extendedMeaningForActivityMeaningLabel:(id)a0;
+ (unsigned long long)_extendedMeaningForMeaning:(unsigned long long)a0 meaningfulEvent:(id)a1;
+ (unsigned long long)_extendedMeaningForRestaurantEvent:(id)a0;
+ (unsigned long long)_extendedMeaningForRestaurantMeaningLabel:(id)a0;
+ (id)allMeaningAggregationMemoryGeneratorClasses;
+ (id)featureRelationWithMeaningLabel:(id)a0;
+ (id)mostSpecificLabelForMeaning:(unsigned long long)a0;
+ (id)requiredFeatureRelation;
+ (id)supportedMeaningLabels;

- (void).cxx_destruct;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithMemoryGenerationContext:(id)a0;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (BOOL)requireSceneProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)a0;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)a0;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;

@end

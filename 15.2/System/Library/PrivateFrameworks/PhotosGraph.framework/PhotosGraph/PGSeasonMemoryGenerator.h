@class PGFeaturedTimePeriodMemoryConfiguration, PGMemoryMomentRequirements, NSDate;

@interface PGSeasonMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;
    PGMemoryMomentRequirements *_momentRequirements;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *localDate;

+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)a0;
+ (BOOL)isMoment:(id)a0 duringSeason:(id)a1;
+ (void)enumerateMomentNodesBySeasonInYearFromMomentNodes:(id)a0 loggingConnection:(id)a1 usingBlock:(id /* block */)a2;
+ (id)seasonNodeForMomentNode:(id)a0;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (unsigned long long)memoryCategory;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (unsigned long long)durationForCuration;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (id)initWithMemoryGenerationContext:(id)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)featuredSeasonConfiguration;
- (BOOL)requireSceneProcessingMeetsThresholdOverTime;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (id)momentRequirements;
- (void)lastSeasonMomentNodesForLocalDate:(id)a0 inGraph:(id)a1 resultBlock:(id /* block */)a2;
- (void)seasonInHistoryMomentNodesForLocalDate:(id)a0 inGraph:(id)a1 resultBlock:(id /* block */)a2;
- (id)_potentialMemoryForMomentNodes:(id)a0 seasonNode:(id)a1 category:(unsigned long long)a2;
- (id)_lastSeasonPotentialMemoryWithGraph:(id)a0;
- (id)_seasonInHistoryPotentialMemoriesWithGraph:(id)a0;

@end

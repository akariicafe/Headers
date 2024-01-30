@class NSDate;

@interface PGEarlyMomentsWithPeopleMemoryGenerator : PGMemoryGenerator

@property (retain, nonatomic) NSDate *localDate;
@property (nonatomic) BOOL shouldGenerateAllMemories;

+ (id)earlyMomentNodesByPersonNodeWithPersonNodes:(id)a0;
+ (unsigned long long)numberOfPotentialMemoriesForGraph:(id)a0;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (id)relevantFeederForPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)a0 withGraph:(id)a1 usingBlock:(id /* block */)a2;

@end

@interface PGPetMemoryGenerator : PGFeaturedMemoryGenerator

- (id)confidenceThresholdByWhitelistedSceneIdentifier;
- (id)confidenceThresholdByBlockedSceneIdentifier;
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)a0 andYearPotentialMemories:(id)a1 rejectedNumbers:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; } *)a2 enumerationBlock:(id /* block */)a3;
- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)a0 andYearPotentialMemories:(id)a1 usingBlock:(id /* block */)a2;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (BOOL)semanticalDedupingEnabledForExtendedCuration;
- (id)relevantFeederForPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (void)_potentialPetMemoryForPet:(id)a0 inGraph:(id)a1 results:(id /* block */)a2;

@end

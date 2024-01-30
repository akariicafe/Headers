@interface PGHobbyMemoryGenerator : PGFeaturedMemoryGenerator

@property (nonatomic) long long hobbyType;
@property (nonatomic) BOOL onlyOverTheYears;
@property (nonatomic) BOOL keepsOnlyIsInteresting;

- (id)confidenceThresholdByWhitelistedSceneIdentifier;
- (id)confidenceThresholdByBlacklistedSceneIdentifier;
- (void)_potentialHobbyMemoryForHobby:(id)a0 results:(id /* block */)a1;
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)a0 andYearPotentialMemories:(id)a1 rejectedNumbers:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; } *)a2 enumerationBlock:(id /* block */)a3;
- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)a0 andYearPotentialMemories:(id)a1 usingBlock:(id /* block */)a2;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (BOOL)semanticalDedupingEnabledForExtendedCuration;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;

@end

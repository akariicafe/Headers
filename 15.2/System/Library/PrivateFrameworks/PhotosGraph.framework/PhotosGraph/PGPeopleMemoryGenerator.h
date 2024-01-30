@class NSString, NSSet;

@interface PGPeopleMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSString *peopleUUID;
@property (retain, nonatomic) NSSet *personNodes;
@property (retain, nonatomic) NSSet *birthdayPersonUUIDs;
@property (nonatomic) long long year;
@property (nonatomic) NSSet *extraFeatures;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (BOOL)semanticalDedupingEnabledForExtendedCuration;
- (id)relevantFeederForPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (void)_potentialMemoriesWithPeopleNode:(id)a0 inYear:(long long)a1 result:(id /* block */)a2;
- (BOOL)_upcomingBirthdayWillCollideWithPotentialMemory:(id)a0;

@end

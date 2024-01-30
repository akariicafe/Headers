@class NSString;

@interface PGLegacyPlaceRegionMemoryGenerator : PGFeaturedMemoryGenerator

@property (nonatomic) NSString *region;
@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (unsigned long long)durationForCuration;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 potentialMemory:(id)a1;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (id)relevantFeederForPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)relevantCurationFeederForPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)relevantCurationFeederForTriggeredMemory:(id)a0 relevantFeeder:(id)a1 inGraph:(id)a2 allowGuestAsset:(BOOL)a3 progressReporter:(id)a4;
- (id)relevantFeederWithScenedAssetLocalIdentifiers:(id)a0 assetFetchResult:(id)a1 graph:(id)a2 allowGuestAsset:(BOOL)a3;
- (void)_potentialMemoriesWithRegionNode:(id)a0 upperBoundYear:(long long)a1 result:(id /* block */)a2;

@end

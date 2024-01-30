@interface PGSocialGroupOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {
    unsigned long long _numberOfInsufficientlyFacedRejects;
    unsigned long long _numberOfBuildFailureRejects;
}

@property (nonatomic) long long socialGroupID;

- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (unsigned long long)durationForExtendedCuration;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 potentialMemory:(id)a1;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (id)relevantFeederForPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)relevantCurationFeederForPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)relevantCurationFeederForTriggeredMemory:(id)a0 relevantFeeder:(id)a1 inGraph:(id)a2 allowGuestAsset:(BOOL)a3 progressReporter:(id)a4;
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)a0 inGraph:(id)a1;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (id)_computeOverTheTimeFacedAssetsForPersonLocalIdentifiers:(id)a0 inFacedAssets:(id)a1 progressBlock:(id /* block */)a2;
- (id)_facedAssetsForMomentNode:(id)a0 personLocalIdentifiers:(id)a1 progressBlock:(id /* block */)a2;
- (id)peopleTitleGeneratorWithMomentNodes:(id)a0 personNodes:(id)a1 titleGenerationContext:(id)a2;

@end

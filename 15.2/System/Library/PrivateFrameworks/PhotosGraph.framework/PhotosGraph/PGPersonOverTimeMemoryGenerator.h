@class NSString;

@interface PGPersonOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {
    unsigned long long _numberOfInsufficientlyFacedRejects;
    unsigned long long _numberOfBuildFailureRejects;
}

@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSString *personName;

- (void).cxx_destruct;
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
- (id)_computeOverTheTimeFacedAssetsForPersonLocalIdentifier:(id)a0 inFacedAssets:(id)a1 ignoresMinimumNumberOfAssets:(BOOL)a2 numberOfInsufficientlyFacedRejects:(unsigned long long *)a3 numberOfBuildFailureRejects:(unsigned long long *)a4 progressReporter:(id)a5;
- (id)peopleTitleGeneratorWithMomentNodes:(id)a0 personNode:(id)a1 titleGenerationContext:(id)a2;

@end

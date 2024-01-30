@interface PGSocialGroupOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {
    unsigned long long _numberOfInsufficientlyFacedRejects;
    unsigned long long _numberOfBuildFailureRejects;
}

@property (nonatomic) long long socialGroupID;

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (unsigned long long)durationForExtendedCuration;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (id)_computeOverTheTimeFacedAssetsForPersonUUIDs:(id)a0 inFacedAssets:(id)a1;

@end

@class NSString;

@interface PGPersonOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {
    unsigned long long _numberOfInsufficientlyFacedRejects;
    unsigned long long _numberOfBuildFailureRejects;
}

@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSString *personName;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (unsigned long long)durationForExtendedCuration;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (id)_computeOverTheTimeFacedAssetsForPersonWithUUID:(id)a0 inFacedAssets:(id)a1;

@end

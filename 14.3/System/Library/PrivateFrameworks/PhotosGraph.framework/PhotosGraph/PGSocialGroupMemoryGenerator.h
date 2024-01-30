@class NSSet;

@interface PGSocialGroupMemoryGenerator : PGFeaturedMemoryGenerator

@property (nonatomic) long long socialGroupID;
@property (nonatomic) long long year;
@property (nonatomic) NSSet *extraFeatures;

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (BOOL)semanticalDedupingEnabledForExtendedCuration;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoriesWithSocialGroupNode:(id)a0 inYear:(long long)a1 result:(id /* block */)a2;

@end

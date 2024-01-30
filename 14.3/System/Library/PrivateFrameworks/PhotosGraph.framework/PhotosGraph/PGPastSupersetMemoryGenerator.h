@class NSDate;

@interface PGPastSupersetMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSDate *localDate;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoryAssetsForSupersetLocationNodes:(id)a0 interestingMomentNodes:(id)a1 andMomentNodes:(id)a2 result:(id /* block */)a3;

@end

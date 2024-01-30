@interface PGRecurrentTripMemoryGenerator : PGFeaturedMemoryGenerator

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)keyAssetWithTripHighlightNodes:(id)a0;

@end

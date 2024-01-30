@interface PGFeelingLuckyMemoryGenerator : PGFeaturedMemoryGenerator

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (id)_potentialMemoriesForDryTesting;
- (id)highlyInterestingMomentNodesInGraph:(id)a0 withProgress:(id /* block */)a1;

@end

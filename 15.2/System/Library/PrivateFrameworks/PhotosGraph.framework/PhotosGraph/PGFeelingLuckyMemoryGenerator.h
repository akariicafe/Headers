@interface PGFeelingLuckyMemoryGenerator : PGFeaturedMemoryGenerator

- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)highlyInterestingMomentNodesInGraph:(id)a0 withProgress:(id /* block */)a1;

@end

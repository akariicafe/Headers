@interface PGPeopleVisitingMemoryGenerator : PGFeaturedMemoryGenerator

- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (void)enumerateVerifiedPeopleNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)consolidatedDateIntervalsFromDateIntervals:(id)a0;
- (void)enumeratePeopleNodesAndVisitsInGraph:(id)a0 usingBlock:(id /* block */)a1;

@end

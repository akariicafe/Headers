@interface PGPeopleVisitingMemoryGenerator : PGFeaturedMemoryGenerator

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (void)enumerateVerifiedPeopleNodesUsingBlock:(id /* block */)a0;
- (id)consolidatedDateIntervalsFromDateIntervals:(id)a0;
- (void)enumeratePeopleNodesAndVisitsUsingBlock:(id /* block */)a0;

@end

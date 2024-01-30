@class NSDate;

@interface PGThrowbackThursdayMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain) NSDate *localDate;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)_oldWeekInHistoryMomentNodesForLocalDate:(id)a0;

@end

@class NSDate;

@interface PGThrowbackThursdayMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain) NSDate *localDate;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (id)_oldWeekInHistoryMomentNodesForLocalDate:(id)a0 inGraph:(id)a1;

@end

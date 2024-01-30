@class NSMutableArray, NSDate;

@interface PGRecentPastEventsMemoryGenerator : PGMemoryGenerator {
    NSMutableArray *_potentialMemories;
}

@property (retain, nonatomic) NSDate *localDate;

- (void).cxx_destruct;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (id)_peopleSeenInPreviousWeekButNotInPreviousThreeMonthsWithGraph:(id)a0 localDate:(id)a1;
- (id)_computePotentialMemoriesForPersonNodes:(id)a0 inGraph:(id)a1;
- (id)_computePotentialMemoriesForSubcategory:(unsigned long long)a0 withGraph:(id)a1 localStartDate:(id)a2 localEndDate:(id)a3;
- (void)_computePotentialMemoriesWithGraph:(id)a0;
- (id)generateMemories:(unsigned long long)a0;
- (id)_createMemoryDebugWithPotentialMemory:(id)a0;

@end

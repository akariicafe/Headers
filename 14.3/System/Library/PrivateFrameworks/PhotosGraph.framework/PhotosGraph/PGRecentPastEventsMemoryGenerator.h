@class NSMutableArray, NSDate;

@interface PGRecentPastEventsMemoryGenerator : PGMemoryGenerator {
    NSMutableArray *_potentialMemories;
}

@property (retain, nonatomic) NSDate *localDate;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)_peopleSeenInPreviousWeekButNotInPreviousThreeMonthsWithLocalDate:(id)a0;
- (id)_computePotentialMemoriesForPersonNodes:(id)a0;
- (id)_computePotentialMemoriesForSubcategory:(unsigned long long)a0 withLocalStartDate:(id)a1 localEndDate:(id)a2;
- (void)_computePotentialMemories;
- (id)generateMemories:(unsigned long long)a0;
- (id)_createMemoryDebugWithPotentialMemory:(id)a0;

@end

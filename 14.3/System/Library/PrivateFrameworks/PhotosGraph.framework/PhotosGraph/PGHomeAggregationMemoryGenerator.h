@class NSDate;

@interface PGHomeAggregationMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSDate *localDate;

+ (id)_monthNodeForMomentNode:(id)a0;
+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)a0;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)_lastMonthPotentialMemories;

@end

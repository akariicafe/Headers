@class NSDate;

@interface PGHomeAggregationMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSDate *localDate;

+ (id)_monthNodeForMomentNode:(id)a0;
+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)a0;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (id)_lastMonthPotentialMemoriesWithGraph:(id)a0;

@end

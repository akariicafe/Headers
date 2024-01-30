@class NSDate;

@interface PGDayInHistoryMemoryGenerator : PGMemoryGenerator

@property (retain, nonatomic) NSDate *localDate;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;

@end

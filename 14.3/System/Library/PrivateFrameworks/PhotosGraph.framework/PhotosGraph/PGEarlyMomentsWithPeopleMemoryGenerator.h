@class NSDate;

@interface PGEarlyMomentsWithPeopleMemoryGenerator : PGMemoryGenerator

@property (retain, nonatomic) NSDate *localDate;
@property (nonatomic) BOOL shouldGenerateAllMemories;

+ (unsigned long long)numberOfPotentialMemoriesForGraph:(id)a0;
+ (id)earlyMomentNodesByPersonNodeWithPersonNodes:(id)a0;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)a0 enumerationBlock:(id /* block */)a1;

@end

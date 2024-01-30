@class NSSet, NSDate;

@interface PGCelebrationOverTimeMemoryGenerator : PGMemoryGenerator

@property (retain, nonatomic) NSDate *localDate;
@property (retain, nonatomic) NSSet *upcomingHolidayNames;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)_holidayNodeForMomentNodes:(id)a0;

@end

@class NSSet, NSDate;

@interface PGCelebrationOverTimeMemoryGenerator : PGMemoryGenerator

@property (retain, nonatomic) NSDate *localDate;
@property (retain, nonatomic) NSSet *upcomingHolidayNames;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)_holidayNodeForMomentNodes:(id)a0;

@end

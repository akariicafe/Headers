@class NSDate;

@interface PGSeasonMemoryGenerator : PGMemoryGenerator

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *localDate;

+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)a0;
+ (BOOL)isMoment:(id)a0 duringSeason:(id)a1;
+ (id)seasonNodeForMomentNode:(id)a0;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)keyAssetCurationOptions;
- (void)lastSeasonMomentNodesForLocalDate:(id)a0 resultBlock:(id /* block */)a1;
- (void)seasonInHistoryMomentNodesForLocalDate:(id)a0 resultBlock:(id /* block */)a1;
- (id)_potentialMemoryForMomentNodes:(id)a0 seasonNode:(id)a1 category:(unsigned long long)a2;
- (id)_lastSeasonPotentialMemory;
- (id)_seasonInHistoryPotentialMemories;

@end

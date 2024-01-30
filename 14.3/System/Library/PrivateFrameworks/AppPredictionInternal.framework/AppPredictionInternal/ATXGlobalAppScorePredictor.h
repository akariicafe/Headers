@class MLModel, _PASCFBurstTrie, ATXMemoryPressureMonitor;

@interface ATXGlobalAppScorePredictor : NSObject <ATXMemoryPressureObserver> {
    _PASCFBurstTrie *_index;
    _PASCFBurstTrie *_signalsTrie;
    MLModel *_globalPopularityPredictor;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
}

@property (readonly, nonatomic) MLModel *globalPopularityPredictor;

+ (id)sharedInstance;

- (void)handleMemoryPressure;
- (void)unloadGlobalPopularityPredictor;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)globalPopularityForBundleIdsGivenTimeDayAndLocation:(id)a0 context:(id)a1;
- (id)globalPopularityForBundleIdsGivenTimeDayLocationAndLastApp:(id)a0 context:(id)a1;
- (id)globalPopularitiesForBundleIds:(id)a0 atTimeOfDayIndex:(int)a1 atDayOfWeekIndex:(int)a2 atLocationIndex:(int)a3 withLastAppLaunched:(id)a4;
- (id)globalPopularitiesForBundleIds:(id)a0 atTimeOfDayIndex:(int)a1 atDayOfWeekIndex:(int)a2 atLocationIndex:(int)a3;
- (id)globalPopularityForBundleIds:(id)a0 atDate:(id)a1 atLocation:(long long)a2 withLastAppLaunched:(id)a3;
- (id)globalPopularitiesAtTimeOfDay:(int)a0 atDayOfWeek:(int)a1 atLocation:(int)a2 withLastAppLaunched:(id)a3;
- (id)initWithMemoryPressureMonitor:(id)a0;

@end

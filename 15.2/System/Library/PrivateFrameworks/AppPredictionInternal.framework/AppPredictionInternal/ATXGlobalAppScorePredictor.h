@class MLModel, _PASCFBurstTrie, ATXMemoryPressureMonitor;

@interface ATXGlobalAppScorePredictor : NSObject <ATXMemoryPressureObserver> {
    _PASCFBurstTrie *_index;
    _PASCFBurstTrie *_signalsTrie;
    MLModel *_globalPopularityPredictor;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
}

@property (readonly, nonatomic) MLModel *globalPopularityPredictor;

+ (id)sharedInstance;

- (id)globalPopularityForBundleIds:(id)a0 atDate:(id)a1 atLocation:(long long)a2 withLastAppLaunched:(id)a3;
- (void)unloadGlobalPopularityPredictor;
- (void)handleMemoryPressure;
- (void).cxx_destruct;
- (id)init;
- (id)globalPopularitiesForBundleIds:(id)a0 atTimeOfDayIndex:(int)a1 atDayOfWeekIndex:(int)a2 atLocationIndex:(int)a3 withLastAppLaunched:(id)a4;
- (id)globalPopularityForBundleIdsGivenTimeDayLocationAndLastApp:(id)a0 context:(id)a1;
- (id)initWithMemoryPressureMonitor:(id)a0;
- (id)globalPopularitiesAtTimeOfDay:(int)a0 atDayOfWeek:(int)a1 atLocation:(int)a2 withLastAppLaunched:(id)a3;
- (void)dealloc;
- (id)globalPopularitiesForBundleIds:(id)a0 atTimeOfDayIndex:(int)a1 atDayOfWeekIndex:(int)a2 atLocationIndex:(int)a3;
- (id)globalPopularityForBundleIdsGivenTimeDayAndLocation:(id)a0 context:(id)a1;

@end

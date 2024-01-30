@class HKUnit, NSString, HKCurrentActivityCacheQuery, HKActivitySummary, HKHealthStore, NSArray, NSHashTable, NSDate, NSObject, FIFitnessAppsStateObserver, _HKCurrentActivitySummaryQuery;
@protocol OS_dispatch_queue;

@interface NTKWellnessTimelineModel : NSObject <FIFitnessAppsStateObserverDelegate> {
    HKHealthStore *_healthStore;
    HKUnit *_kcalUnit;
    HKUnit *_minuteUnit;
    HKUnit *_countUnit;
    _HKCurrentActivitySummaryQuery *_queue_currentActivitySummaryQuery;
    NSObject<OS_dispatch_queue> *_queue;
    HKActivitySummary *_queue_currentActivitySummary;
    HKCurrentActivityCacheQuery *_queue_currentActivityCacheQuery;
    NSArray *_queue_currentActiveEnergyChartData;
    NSArray *_queue_currentMoveTimeChartData;
    NSArray *_queue_currentExerciseChartData;
    NSArray *_queue_currentStandChartData;
    NSObject<OS_dispatch_queue> *_subscriber_queue;
    NSHashTable *_subscribers;
    NSDate *_currentDate;
    BOOL _queue_ignoreLoadingSummary;
    FIFitnessAppsStateObserver *_fitnessAppsStateObserver;
    BOOL _areFitnessAppsRestricted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedModel;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeSubscriber:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)getCurrentWellnessEntryWithHandler:(id /* block */)a0;
- (void)_handleTimeChange;
- (id)_queue_wellnessEntryModelFromCurrentActivitySummary;
- (void)_broadcastCurrentEntryUpdate:(id)a0 toSubscriber:(id)a1;
- (void)_queue_startQueries;
- (void)_queue_stopQueriesPreservingExistingGoals:(BOOL)a0;
- (void)_queue_restartQueriesPreservingExistingGoals:(BOOL)a0;
- (BOOL)_loadingStateForActivitySummary:(id)a0;
- (void)_broadcastCurrentEntryUpdateToSubscribers:(id)a0;
- (void)fitnessAppsStateObserver:(id)a0 stateDidChange:(long long)a1;
- (id)timelineStartDate;
- (id)timelineEndDate;
- (id)switcherWelnessEntry;
- (void)getWellnessEntriesAfterDate:(id)a0 limit:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)getWellnessEntriesBeforeDate:(id)a0 limit:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)_currentActivitySummaryQueryCollectionIntervalsOverride;
- (void)_queue_restartQueriesIfQueryInUse:(id)a0;
- (void)_queue_updateCurrentActivitySummaryWithSummary:(id)a0;
- (void)_queue_updateChartStatisticsWithStatisticsQueryResult:(id)a0;

@end

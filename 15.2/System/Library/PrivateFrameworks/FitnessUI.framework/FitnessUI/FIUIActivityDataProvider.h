@class HKUnit, NSString, HKCurrentActivityCacheQuery, HKActivitySummary, HKHealthStore, NSArray, NSHashTable, NSDate, NSObject, FIFitnessAppsStateObserver, _HKCurrentActivitySummaryQuery;
@protocol OS_dispatch_queue;

@interface FIUIActivityDataProvider : NSObject <FIFitnessAppsStateObserverDelegate> {
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

- (void)addSubscriber:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_setCurrentDate:(id)a0;
- (void)dealloc;
- (void)removeSubscriber:(id)a0;
- (void)fitnessAppsStateObserver:(id)a0 stateDidChange:(long long)a1;
- (void)_handleTimeChange;
- (id)_queue_activityDataModelFromCurrentActivitySummary;
- (void)_broadcastCurrentModelUpdate:(id)a0 toSubscriber:(id)a1;
- (void)_queue_startQueries;
- (void)_queue_stopQueriesPreservingExistingGoals:(BOOL)a0;
- (void)_queue_restartQueriesPreservingExistingGoals:(BOOL)a0;
- (BOOL)_loadingStateForActivitySummary:(id)a0;
- (void)_broadcastCurrentModelUpdateToSubscribers:(id)a0;
- (id)switcherActivityDataModel;
- (void)getCurrentActivityDataModelWithHandler:(id /* block */)a0;
- (id)_currentActivitySummaryQueryCollectionIntervalsOverride;
- (void)_queue_restartQueriesIfQueryInUse:(id)a0;
- (void)_queue_updateCurrentActivitySummaryWithSummary:(id)a0;
- (void)_queue_updateChartStatisticsWithStatisticsQueryResult:(id)a0;

@end

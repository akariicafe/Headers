@class HKActivitySummary, HKSynchronousObserverSet, NSString, NSCache, HKHealthStore, NSCalendar, HKUnitPreferenceController, HKFetchOperation, HKQuery, HKThrottleCallback, HKDateCache, HKDisplayTypeController;

@interface HKActivitySummaryDataProvider : NSObject <HKDateCacheObserver> {
    HKSynchronousObserverSet *_observers;
    NSCache *_activitySummaryForTimeScopeCache;
    NSCalendar *_cachedCalendar;
    HKFetchOperation *_outstandingFetchOperation;
    HKQuery *_observerQuery;
    NSCache *_hourlyActivitySummaryCache;
    HKThrottleCallback *_databaseChangesThrottle;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;
@property (readonly, nonatomic) HKActivitySummary *latestActivitySummary;
@property (readonly, nonatomic) long long activityMoveMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_transitionToFetchFailureForTimeScope:(long long)a0;
- (id)activitySummariesForDateRange:(id)a0 timeScope:(long long)a1;
- (id)_queriesForTimeScope:(long long)a0 withCompletion:(id /* block */)a1;
- (id)initWithHealthStore:(id)a0 dateCache:(id)a1 displayTypeController:(id)a2 unitController:(id)a3 activityMoveMode:(long long)a4;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (long long)_weekOfYearForDateComponents:(id)a0 calendar:(id)a1;
- (void)_unitPreferencesDidUpdate:(id)a0;
- (id)cachedCalendar;
- (void)_hourlyPageInProgress:(id)a0;
- (id)initWithHealthStore:(id)a0 dateCache:(id)a1 displayTypeController:(id)a2 unitController:(id)a3;
- (void)_fetchValueWithRetryCount:(long long)a0;
- (id)_hourActivitySummariesForDateRange:(id)a0;
- (void)_clearCaches;
- (id)_buildActivitySummaryFromAverages:(struct _WDActivitySummaryAverages { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })a0 averagePeriod:(long long)a1 startDate:(id)a2 calendar:(id)a3 energyUnit:(id)a4 standHourUnit:(id)a5;
- (void)_hourActivitySummariesForDateRange:(id)a0 pageHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_predicateForStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 activityMoveMode:(long long)a3;
- (void)_submitHourlyQueryForPageNumber:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)_dayActivitySummariesForDateRange:(id)a0;
- (void)_hourlyActivityPageDataArrived:(id)a0 pageNumber:(id)a1 error:(id)a2;
- (id)_hourlySummariesFromStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 activeEnergyData:(id)a3 appleMoveTimeData:(id)a4 exerciseData:(id)a5 standData:(id)a6 dayGoalData:(id)a7;
- (void)_hourlyActivityDataForStartDate:(id)a0 endDate:(id)a1 healthStore:(id)a2 calendar:(id)a3 handler:(id /* block */)a4;
- (BOOL)activitySummariesAreLoading;
- (void)_stopActivitySummaryChangeObserver;
- (void)_averageActivitySummariesForCachedData:(id)a0 averagePeriod:(long long)a1 handler:(id /* block */)a2;
- (id)_fetchOperationForTimeScope:(long long)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (void)_alertObserversDidUpdateValues;
- (id)_buildHourlyActivitySummaryFromDate:(id)a0 calendar:(id)a1 moveQuantity:(id)a2 exerciseQuantity:(id)a3 standQuantity:(id)a4 moveGoal:(id)a5 exerciseGoal:(id)a6 standGoal:(id)a7;
- (id)activitySummariesForTimeScope:(long long)a0;
- (id)_predicateForStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2;
- (void)_partitionAndProcessActivitySummariesForAllTimeScopes:(id)a0;
- (id)_averageActivitySummariesForDateRange:(id)a0 averagePeriod:(long long)a1;
- (BOOL)_sampleDate:(id)a0 withinHourBeforeDate:(id)a1;
- (void)dateCacheDidUpdate:(id)a0 onNotification:(id)a1;
- (void)_setupActivitySummaryChangeObserver;

@end

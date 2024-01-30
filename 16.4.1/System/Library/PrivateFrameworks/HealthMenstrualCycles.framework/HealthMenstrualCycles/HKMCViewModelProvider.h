@class NSHashTable, NSString, NSArray, _HKDelayedOperation, NSMutableDictionary, HKCalendarCache, HKMCAnalysisProvider, NSObject, HKMCAnalysis, NSMutableIndexSet, NSNumber;
@protocol OS_dispatch_queue, HKMCViewModelProviderDataSource;

@interface HKMCViewModelProvider : NSObject <HKMCViewModelProviderDataSourceDelegate, HKMCAnalysisProviderObserver> {
    id<HKMCViewModelProviderDataSource> _dataSource;
    HKMCAnalysisProvider *_analysisProvider;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldFetchCycleFactors;
    long long _prefetchDuration;
    struct { long long start; long long duration; } _managedDayRange;
    NSMutableIndexSet *_fetchStartedDayIndexes;
    NSMutableIndexSet *_fetchCompletedDayIndexes;
    NSMutableDictionary *_daySummariesByDayIndex;
    NSArray *_cycleFactors;
    NSNumber *_minimumAnalysisAnchor;
    HKMCAnalysis *_analysis;
    _HKDelayedOperation *_notifyObserversOperation;
}

@property (nonatomic) long long maximumActiveDuration;
@property (readonly, nonatomic) HKCalendarCache *calendarCache;
@property (nonatomic) struct { long long start; long long duration; } activeDayRange;
@property (readonly, nonatomic) long long minimumBufferDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)_queue_notifyObserversDidUpdate;
- (id)_copyWithDataSource:(id)a0 minimumBufferDuration:(long long)a1;
- (BOOL)_didFetchInitialAnalysis;
- (BOOL)_didFetchMinimumAnalysis;
- (unsigned long long)_fertileWindowLevelWithDayIndex:(long long)a0;
- (long long)_fetchStateForDayIndex:(long long)a0;
- (id)_initWithDataSource:(id)a0 analysisProvider:(id)a1 maximumActiveDuration:(long long)a2 minimumBufferDuration:(long long)a3 prefetchDuration:(long long)a4 shouldFetchCycleFactors:(BOOL)a5 calendarCache:(id)a6 queue:(id)a7;
- (unsigned long long)_menstruationLevelWithDayIndex:(long long)a0 menstrualFlow:(long long)a1 partiallyLoggedPeriod:(BOOL *)a2;
- (BOOL)_ppt_didFetchAnalysis;
- (BOOL)_ppt_didFetchDaySummaries;
- (void)_queue_runNotifyObserversOperationNow;
- (void)_setFetchState:(long long)a0 forDayIndexRange:(struct { long long x0; long long x1; })a1;
- (struct { long long x0; long long x1; })_test_managedDayRange;
- (void)_updateManagedDayRangeIfNeeded;
- (id)_viewModelWithDayIndex:(long long)a0 fetchedDaySummary:(id)a1;
- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (id)copyWithMinimumBufferDuration:(long long)a0;
- (id)dayViewModelAtIndex:(long long)a0;
- (id)initWithHealthStore:(id)a0 analysisProvider:(id)a1 maximumActiveDuration:(long long)a2 minimumBufferDuration:(long long)a3 shouldFetchCycleFactors:(BOOL)a4 calendarCache:(id)a5;
- (id)initWithHealthStore:(id)a0 analysisProvider:(id)a1 maximumActiveDuration:(long long)a2 minimumBufferDuration:(long long)a3 shouldFetchCycleFactors:(BOOL)a4 calendarCache:(id)a5 queue:(id)a6;
- (void)setActiveCycles:(id)a0;
- (void)viewModelProviderDataSource:(id)a0 didFetchCycleFactors:(id)a1 forDayIndexRange:(struct { long long x0; long long x1; })a2;
- (void)viewModelProviderDataSource:(id)a0 didFetchDaySummaries:(id)a1 forDayIndexRange:(struct { long long x0; long long x1; })a2 analysisAnchor:(id)a3;
- (void)viewModelProviderDataSourceDidUpdateCycleFactors:(id)a0;
- (void)viewModelProviderDataSourceDidUpdateDaySummaries:(id)a0;

@end

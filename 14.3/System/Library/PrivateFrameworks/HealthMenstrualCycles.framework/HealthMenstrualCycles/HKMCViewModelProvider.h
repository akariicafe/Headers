@class NSHashTable, NSString, NSArray, NSMutableDictionary, HKMCAnalysis, HKMCAnalysisProvider, HKMCViewModelProviderDataSource, NSObject, HKCalendarCache, NSMutableIndexSet, NSNumber;
@protocol OS_dispatch_queue;

@interface HKMCViewModelProvider : NSObject <HKMCViewModelProviderDataSourceDelegate, HKMCAnalysisProviderObserver> {
    HKMCViewModelProviderDataSource *_dataSource;
    HKMCAnalysisProvider *_analysisProvider;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    long long _maximumActiveDuration;
    long long _minimumPrefetchDuration;
    struct { long long start; long long duration; } _managedDayRange;
    NSMutableIndexSet *_fetchStartedDayIndexes;
    NSMutableIndexSet *_fetchCompletedDayIndexes;
    NSMutableDictionary *_daySummariesByDayIndex;
    NSArray *_cycleFactors;
    NSNumber *_minimumAnalysisAnchor;
    HKMCAnalysis *_analysis;
    HKCalendarCache *_calendarCache;
}

@property (nonatomic) struct { long long start; long long duration; } activeDayRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)viewModelProviderDataSource:(id)a0 didFetchDaySummaries:(id)a1 forDayIndexRange:(struct { long long x0; long long x1; })a2 analysisAnchor:(id)a3;
- (void)viewModelProviderDataSource:(id)a0 didFetchCycleFactors:(id)a1 forDayIndexRange:(struct { long long x0; long long x1; })a2;
- (void)viewModelProviderDataSourceDidUpdateDaySummaries:(id)a0;
- (void)viewModelProviderDataSourceDidUpdateCycleFactors:(id)a0;
- (id)initWithHealthStore:(id)a0 analysisProvider:(id)a1 maximumActiveDuration:(long long)a2 minimumPrefetchDuration:(long long)a3 queue:(id)a4;
- (id)_initWithDataSource:(id)a0 analysisProvider:(id)a1 maximumActiveDuration:(long long)a2 minimumPrefetchDuration:(long long)a3 calendarCache:(id)a4 queue:(id)a5;
- (long long)_fetchStateForDayIndex:(long long)a0;
- (id)_viewModelWithDayIndex:(long long)a0 fetchedDaySummary:(id)a1;
- (void)_updateManagedDayRangeIfNeeded;
- (unsigned long long)_menstruationLevelWithDayIndex:(long long)a0 menstrualFlow:(long long)a1 partiallyLoggedPeriod:(BOOL *)a2;
- (unsigned long long)_fertileWindowLevelWithDayIndex:(long long)a0;
- (BOOL)_didFetchInitialAnalysis;
- (void)_setFetchState:(long long)a0 forDayIndexRange:(struct { long long x0; long long x1; })a1;
- (void)_queue_notifyObserversDidUpdate;
- (BOOL)_didFetchMinimumAnalysis;
- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (id)initWithHealthStore:(id)a0 analysisProvider:(id)a1 maximumActiveDuration:(long long)a2 minimumPrefetchDuration:(long long)a3;
- (id)dayViewModelAtIndex:(long long)a0;
- (struct { long long x0; long long x1; })_test_managedDayRange;
- (BOOL)_ppt_didFetchAnalysis;
- (BOOL)_ppt_didFetchDaySummaries;

@end

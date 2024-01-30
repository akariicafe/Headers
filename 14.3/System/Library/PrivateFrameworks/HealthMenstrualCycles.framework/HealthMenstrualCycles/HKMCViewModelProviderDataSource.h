@class HKMCDaySummaryObserverQuery, HKHealthStore, HKCalendarCache, NSMutableSet, _HKDatabaseChangesQuery, NSObject, NSMutableIndexSet, HKMultiTypeSampleQuery;
@protocol HKMCViewModelProviderDataSourceDelegate, OS_dispatch_queue;

@interface HKMCViewModelProviderDataSource : NSObject {
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_summaryQueries;
    HKMCDaySummaryObserverQuery *_summaryObserverQuery;
    HKMultiTypeSampleQuery *_factorQuery;
    _HKDatabaseChangesQuery *_factorObserverQuery;
    NSMutableIndexSet *_canceledDayIndexes;
    HKCalendarCache *_calendarCache;
}

@property (weak, nonatomic) id<HKMCViewModelProviderDataSourceDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_startObservingDaySummaryUpdates;
- (void)_startObservingCycleFactorsUpdates;
- (id)initWithHealthStore:(id)a0 delegate:(id)a1 calendarCache:(id)a2 queue:(id)a3;
- (void)fetchDaySummariesInDayIndexRange:(struct { long long x0; long long x1; })a0;
- (void)cancelFetchForDaySummariesInDayIndexRange:(struct { long long x0; long long x1; })a0;
- (void)fetchCycleFactorsInDayIndexRange:(struct { long long x0; long long x1; })a0;

@end

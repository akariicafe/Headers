@class NSString, NSDictionary, HKHealthStore, NSHashTable, _HKDateRangeQuery;

@interface HKSampleTypeDateRangeController : NSObject {
    HKHealthStore *_healthStore;
    _HKDateRangeQuery *_dateRangeQuery;
    NSHashTable *_observers;
    BOOL _applicationIsInForeground;
    BOOL _lastQuerySufferedError;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *dateRangesBySampleType;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_beginUpdates;
- (id)initWithHealthStore:(id)a0;
- (void)_applicationMovingToForeground:(id)a0;
- (void)_applicationMovingToBackground:(id)a0;
- (void)_alertObserverDidUpdateDateRanges:(id)a0;
- (void)_resultsDidUpdate:(id)a0;
- (void)_updateHandlerDidReceiveError:(id)a0;
- (void)_alertObserversDidUpdateDateRanges;
- (id)dateRangeForSampleType:(id)a0;

@end

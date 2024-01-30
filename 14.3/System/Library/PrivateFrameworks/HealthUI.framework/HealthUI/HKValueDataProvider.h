@class HKDateCache, HKHealthStore, HKDisplayType, NSString, HKFetchOperation, NSHashTable;

@interface HKValueDataProvider : NSObject <HKDateCacheObserver, HKSampleTypeUpdateControllerObserver> {
    BOOL _resultsLoaded;
    BOOL _needsToReFetchValue;
    id _value;
    HKFetchOperation *_outstandingFetchOperation;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) BOOL hasLoadedData;
@property (readonly, nonatomic) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)secondaryValue;
- (id)currentValue;
- (id)initWithHealthStore:(id)a0 updateController:(id)a1 dateCache:(id)a2 displayType:(id)a3;
- (void)updateController:(id)a0 didReceiveUpdateForType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3;
- (void)updateController:(id)a0 didReceiveHighFrequencyUpdateForType:(id)a1;
- (void)dateCacheDidUpdate:(id)a0 onNotification:(id)a1;
- (void)_handleUnitPreferencesDidChangeNotification:(id)a0;
- (void)_refreshValueIfNecessary;
- (BOOL)_currentlyFetchingValue;
- (void)_setNeedsReFetchValue;
- (void)_alertObserversDidUpdateValues;
- (BOOL)_requiresValueFetch;
- (void)_fetchValueWithRetryCount:(long long)a0;
- (void)_transitionToFetchFailure;
- (void)_updateValueWithValue:(id)a0;
- (id)fetchOperationWithCompletion:(id /* block */)a0;
- (void)didUpdateValue;
- (void)invalidateValue;
- (void)unitPreferencesDidUpdate;

@end

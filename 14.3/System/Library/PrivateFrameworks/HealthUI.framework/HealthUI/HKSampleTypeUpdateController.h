@class HKHealthStore, NSMutableDictionary;

@interface HKSampleTypeUpdateController : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_outstandingQueriesByType;
    NSMutableDictionary *_queryStatesByType;
    NSMutableDictionary *_observersByType;
}

- (void).cxx_destruct;
- (id)_observersForType:(id)a0;
- (void)removeObserver:(id)a0 forType:(id)a1;
- (id)initWithHealthStore:(id)a0;
- (void)addObserver:(id)a0 forType:(id)a1;
- (BOOL)_typeRequiresNewQuery:(id)a0;
- (void)_createQueryForType:(id)a0 retryCount:(long long)a1;
- (void)_callObservers:(id)a0 withType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3;
- (id)_allObservedTypes;
- (void)_removeQueryForType:(id)a0;
- (long long)_queryStateForType:(id)a0;
- (void)_setQueryState:(long long)a0 forType:(id)a1;
- (void)_handleQueryCallbackForType:(id)a0 samplesAdded:(id)a1 objectsDeleted:(id)a2 error:(id)a3 retryCount:(long long)a4;
- (BOOL)_isHighFrequencyDataType:(id)a0;
- (void)_handleHighFrequencyObserverCallbacksForType:(id)a0;
- (void)_transitionToQueryFailureForType:(id)a0;
- (void)_handleQueryErrorForType:(id)a0 retryCount:(long long)a1 error:(id)a2;
- (void)_handleQuerySuccessForType:(id)a0 samplesAdded:(id)a1 objectsRemoved:(id)a2;
- (BOOL)isQueryStateRunningForType:(id)a0;

@end

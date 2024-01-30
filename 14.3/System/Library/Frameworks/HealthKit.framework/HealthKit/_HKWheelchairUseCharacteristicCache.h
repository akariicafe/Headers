@class HKHealthStore, NSHashTable, NSObject, HKWheelchairUseObject;
@protocol OS_dispatch_queue;

@interface _HKWheelchairUseCharacteristicCache : NSObject {
    HKHealthStore *_healthStore;
    NSHashTable *_observers;
    long long _state;
    HKWheelchairUseObject *_wheelchairUseObject;
    NSObject<OS_dispatch_queue> *_queue;
    int _characteristicUpdateToken;
    long long _queryRetries;
}

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (BOOL)_needsFetch;
- (void)_fetchWheelchairUse;
- (void)_fetchWheelchairUseIfNecessary;
- (BOOL)isWheelchairUser;
- (void)_handleFetchSuccess:(id)a0;
- (void)_handleFetchError:(id)a0;
- (void)_alertObserversDidUpdateToWheelchairUser:(BOOL)a0;
- (BOOL)hasFetchedWheelchairUse;

@end

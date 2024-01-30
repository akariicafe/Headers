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

- (id)initWithHealthStore:(id)a0;
- (void)addObserver:(id)a0;
- (void)_alertObserversDidUpdateToWheelchairUser:(BOOL)a0;
- (void)removeObserver:(id)a0;
- (void)_fetchWheelchairUseIfNecessary;
- (void)_fetchWheelchairUse;
- (void)_handleFetchError:(id)a0;
- (void).cxx_destruct;
- (BOOL)isWheelchairUser;
- (void)_handleFetchSuccess:(id)a0;
- (void)dealloc;
- (BOOL)hasFetchedWheelchairUse;
- (BOOL)_needsFetch;

@end

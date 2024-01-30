@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFNetworkAvailability : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    struct AvailabilityState { unsigned char availabilityIsKnown : 1; unsigned char isAvailable : 1; } _state;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;

- (void)_availabilityChanged;
- (void)_clearState;
- (id)init;
- (void)_startObservingAvailability;
- (void).cxx_destruct;
- (BOOL)isAvailable;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_updateState;
- (void)_notifyObservers;
- (void)_stopObservingAvailability;

@end

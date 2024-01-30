@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFNetworkAvailability : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    struct AvailabilityState { unsigned char availabilityIsKnown : 1; unsigned char isAvailable : 1; } _state;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;

- (void)_clearState;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_startObservingAvailability;
- (void).cxx_destruct;
- (id)init;
- (void)_availabilityChanged;
- (void)_stopObservingAvailability;
- (void)_notifyObservers;
- (BOOL)isAvailable;
- (void)_updateState;

@end

@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFNetworkAvailability : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    struct AvailabilityState { unsigned char availabilityIsKnown : 1; unsigned char isAvailable : 1; } _state;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;

- (BOOL)isAvailable;
- (void)_updateState;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_clearState;
- (id)init;
- (void)_stopObservingAvailability;
- (void)_notifyObservers;
- (void)_availabilityChanged;
- (void).cxx_destruct;
- (void)_startObservingAvailability;

@end

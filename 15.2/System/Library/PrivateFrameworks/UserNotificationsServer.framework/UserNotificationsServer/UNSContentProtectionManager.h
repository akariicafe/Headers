@class UNSKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNSKeyedObservable *_observable;
}

- (long long)_queue_keyBagLockState;
- (long long)observedState;
- (long long)_queue_observedState;
- (void).cxx_destruct;
- (id)init;
- (id)classCStrategy;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;
- (void)dealloc;
- (id)contentProtectionStrategyForMinimumProtection:(id)a0;
- (void)removeContentProtectionObserver:(id)a0;
- (id)classDStrategy;
- (BOOL)deviceUnlockedSinceBoot;
- (void)addContentProtectionObserver:(id)a0;
- (BOOL)isProtectedDataAvailable;

@end

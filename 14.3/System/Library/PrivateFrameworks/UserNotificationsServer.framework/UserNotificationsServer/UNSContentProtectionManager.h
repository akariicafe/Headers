@class UNSKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNSKeyedObservable *_observable;
}

- (void)removeContentProtectionObserver:(id)a0;
- (BOOL)deviceUnlockedSinceBoot;
- (BOOL)isProtectedDataAvailable;
- (id)classCStrategy;
- (id)init;
- (void).cxx_destruct;
- (id)classDStrategy;
- (void)dealloc;
- (long long)_queue_keyBagLockState;
- (void)addContentProtectionObserver:(id)a0;
- (long long)_queue_observedState;
- (id)contentProtectionStrategyForMinimumProtection:(id)a0;
- (long long)observedState;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;

@end

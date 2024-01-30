@class UNSKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNSKeyedObservable *_observable;
}

- (id)classDStrategy;
- (void)removeContentProtectionObserver:(id)a0;
- (long long)_queue_observedState;
- (void)addContentProtectionObserver:(id)a0;
- (id)classCStrategyExcludedFromBackup;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;
- (id)classCStrategy;
- (void)dealloc;
- (id)contentProtectionStrategyForMinimumProtection:(id)a0 excludedFromBackup:(BOOL)a1;
- (id)classDStrategyExcludedFromBackup;
- (id)init;
- (BOOL)isProtectedDataAvailable;
- (long long)_queue_keyBagLockState;
- (void).cxx_destruct;
- (BOOL)deviceUnlockedSinceBoot;
- (long long)observedState;

@end

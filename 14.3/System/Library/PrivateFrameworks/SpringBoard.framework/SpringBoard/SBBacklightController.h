@class SBIdleTimerDefaults, SBHIDUILockAssertion, NSHashTable;

@interface SBBacklightController : NSObject {
    SBIdleTimerDefaults *_idleTimerDefaults;
    NSHashTable *_observers;
    NSHashTable *_informers;
}

@property (readonly, nonatomic) BOOL isPendingScreenUnblankAfterCACommit;
@property (readonly, nonatomic) BOOL screenIsOn;
@property (readonly, nonatomic) BOOL screenIsDim;
@property (readonly, nonatomic) long long lastBacklightChangeSource;
@property (retain, nonatomic) SBHIDUILockAssertion *currentHIDUILockAssertion;
@property (readonly, nonatomic) double backlightFactor;

+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)a0;
+ (id)sharedInstanceIfExists;

- (void)preventIdleSleep;
- (id)init;
- (void)reloadDefaults;
- (void).cxx_destruct;
- (void)registerInformer:(id)a0;
- (void)allowIdleSleep;
- (void)removeObserver:(id)a0;
- (void)_deferredScreenUnblankDone;
- (void)addObserver:(id)a0;
- (void)_notifyObserversWillAnimateToFactor:(float)a0 source:(long long)a1;
- (void)animateBacklightToFactor:(float)a0 duration:(double)a1 source:(long long)a2 completion:(id /* block */)a3;
- (void)setBacklightFactor:(float)a0 source:(long long)a1;
- (void)_notifyObserversDidAnimateToFactor:(float)a0 source:(long long)a1;
- (double)defaultLockScreenDimInterval;
- (void)preventIdleSleepForNumberOfSeconds:(float)a0;
- (void)_startFadeOutAnimationFromLockSource:(int)a0;
- (void)_suspendProxAndMultitouch:(BOOL)a0 source:(long long)a1;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)a0;
- (void)unregisterInformer:(id)a0;
- (BOOL)shouldTurnOnScreenForBacklightSource:(long long)a0;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (void)_undimFromSource:(long long)a0;
- (void)_animateBacklightToFactor:(float)a0 duration:(double)a1 source:(long long)a2 silently:(BOOL)a3 completion:(id /* block */)a4;
- (void)turnOnScreenFullyWithBacklightSource:(long long)a0;
- (void)setBacklightFactorPending:(float)a0;

@end

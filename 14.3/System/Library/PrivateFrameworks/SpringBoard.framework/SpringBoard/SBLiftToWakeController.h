@class NSString, SBIdleTimerDefaults, NSHashTable, CMWakeGestureManager;

@interface SBLiftToWakeController : NSObject <CMWakeGestureDelegate> {
    CMWakeGestureManager *_wakeGestureManager;
    long long _wakeGestureState;
    NSHashTable *_observers;
    BOOL _screenOn;
    BOOL _observingCMWakeGestureManager;
}

@property (retain, nonatomic, getter=_idleTimerDefaults, setter=_setIdleTimerDefaults:) SBIdleTimerDefaults *idleTimerDefaults;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1 orientation:(int)a2;
- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1 orientation:(int)a2 detectedAt:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_startObservingIfNecessary;
- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1;
- (id)initWithBacklightController:(id)a0 idleTimerDefaults:(id)a1;
- (void)_handleBacklightLevelChanged:(id)a0;
- (void)_reconsiderEnablement;
- (void)_stopObservingIfNecessary;
- (void)_screenTurnedOff;
- (void)_screenTurnedOn;
- (void)_sendTransitionToObservers:(long long)a0 deviceOrientation:(long long)a1;
- (void)_ignoredTransition:(long long)a0;
- (BOOL)_isObservingWakeGestureManager;

@end

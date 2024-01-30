@class SBMainDisplayPolicyAggregator, SBIdleTimerGlobalCoordinator, SBBacklightController, SBLiftToWakeController, NSString, SBLockScreenManager;

@interface SBLiftToWakeManager : NSObject <CSExternalEventHandling, SBLiftToWakeObserver, BSInvalidatable> {
    BOOL _observing;
    BOOL _significantUserInteractionOccuredSinceWake;
    BOOL _invalidated;
}

@property (retain, nonatomic, getter=_liftToWakeController, setter=_setLiftToWakeController:) SBLiftToWakeController *liftToWakeController;
@property (retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBMainDisplayPolicyAggregator *policyAggregator;
@property (retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic, getter=_backlightController, setter=_setBacklightController:) SBBacklightController *backlightController;
@property (retain, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) SBIdleTimerGlobalCoordinator *idleTimerCoordinator;
@property (nonatomic, getter=_gestureWokeScreen, setter=_setGestureWokeScreen:) BOOL gestureWokeScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (BOOL)_isLockScreenMainPageVisible;
- (void)_backlightWillTurnOn:(id)a0;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (void)conformsToCSEventHandling;
- (id)_initWithLiftToWakeController:(id)a0;
- (void)_ignoredTransition:(long long)a0;
- (void)liftToWakeController:(id)a0 didObserveTransition:(long long)a1 deviceOrientation:(long long)a2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end

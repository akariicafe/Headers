@class SBIdleTimerGlobalStateMonitor, NSString, SBBacklightController, SBDeviceUnlockAggdLogger, NSMutableArray, SBProximitySensorManager;
@protocol SBIdleTimer, SBIdleTimerIdleEventHandler;

@interface SBIdleTimerPolicyAggregator : NSObject <SBIdleTimerObserving, SBIdleTimerGlobalCoordinatorDelegate> {
    SBProximitySensorManager *_proximitySensorManager;
    id<SBIdleTimerIdleEventHandler> _idleEventHandler;
    NSMutableArray *_idleTimerHandlerChain;
    SBIdleTimerGlobalStateMonitor *_globalStateMonitor;
    unsigned char _disableAutoDimming : 1;
}

@property (retain, nonatomic, setter=_setIdleTimer:) id<SBIdleTimer> idleTimer;
@property (readonly, nonatomic, getter=_backlightController) SBBacklightController *backlightController;
@property (readonly, nonatomic, getter=_logger) SBDeviceUnlockAggdLogger *logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)idleTimerDidWarn:(id)a0;
- (void).cxx_destruct;
- (void)idleTimerDidExpire:(id)a0;
- (void)idleTimerDidResetForUserAttention:(id)a0;
- (void)idleTimerDidRefresh:(id)a0;
- (id)initWithBacklightController:(id)a0 proximitySensorManager:(id)a1 idleEventHandler:(id)a2;
- (void)_addIdleTimerHandler:(id)a0;
- (void)_removeIdleTimerHandler:(id)a0;
- (void)idleTimerGlobalCoordinator:(id)a0 didActivateIdleTimer:(id)a1;
- (id)_initWithBacklightController:(id)a0 proximitySensorManager:(id)a1 idleEventHandler:(id)a2 globalStateMonitor:(id)a3 unlockLogger:(id)a4;

@end

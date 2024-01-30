@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface SFChargingUICoordinator : SFXPCClient {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _animationSPIAdopted;
    BOOL _runningAsCarry;
    NSDate *_uiUpdateMaxDate;
    NSDate *_uiUpdateRequestDate;
    id /* block */ _uiUpdateHandler;
    BOOL _uiUpdateMinTimeElapsed;
    BOOL _uiUpdateShouldDismiss;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
}

@property (nonatomic) long long defaultDuration;

- (void).cxx_destruct;
- (void)_requestToDismissUIHandler:(id /* block */)a0;
- (void)onqueue_connectionInterrupted;
- (void)_sendDismissUIWithReason:(long long)a0;
- (void)_timingRestartMinTimer;
- (void)_requestToStartAnimationAtDate:(id)a0;
- (void)initialViewControllerDidAppear;
- (void)_activate;
- (void)initialViewControllerDidDisappear;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)requestAnimationDateWithCompletion:(id /* block */)a0;
- (void)requestToDismissUIHandler:(id /* block */)a0;
- (void)activate;
- (id)exportedInterface;
- (void)_invalidate;
- (void)requestToStartAnimationAtDate:(id)a0;
- (id)machServiceName;
- (id)remoteObjectInterface;
- (void)_timingInvalidateMinTimer;
- (void)_initialViewControllerDidDisappear;
- (void)_dismissUI;
- (void)requestToShowUIWithHandler:(id /* block */)a0;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInvalidated;
- (void)invalidate;
- (void)sendDismissUIWithReason:(long long)a0;
- (void)_initialViewControllerDidAppear;

@end

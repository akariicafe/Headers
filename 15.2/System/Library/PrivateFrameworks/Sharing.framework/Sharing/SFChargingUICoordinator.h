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

- (id)remoteObjectInterface;
- (void)_dismissUI;
- (void)_initialViewControllerDidDisappear;
- (void)onqueue_connectionEstablished;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (void)initialViewControllerDidAppear;
- (void)_invalidate;
- (void)onqueue_connectionInvalidated;
- (void)onqueue_connectionInterrupted;
- (void)initialViewControllerDidDisappear;
- (void)requestToStartAnimationAtDate:(id)a0;
- (void)sendDismissUIWithReason:(long long)a0;
- (void)_requestToStartAnimationAtDate:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)_activate;
- (void)_timingRestartMinTimer;
- (void)invalidate;
- (id)exportedInterface;
- (void)requestAnimationDateWithCompletion:(id /* block */)a0;
- (void)_requestToDismissUIHandler:(id /* block */)a0;
- (void)_sendDismissUIWithReason:(long long)a0;
- (void)_initialViewControllerDidAppear;
- (void)requestToShowUIWithHandler:(id /* block */)a0;
- (void)requestToDismissUIHandler:(id /* block */)a0;
- (void)_timingInvalidateMinTimer;

@end

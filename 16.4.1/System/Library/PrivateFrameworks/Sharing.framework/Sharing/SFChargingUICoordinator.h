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

- (void)onqueue_connectionInvalidated;
- (id)remoteObjectInterface;
- (void)onqueue_connectionInterrupted;
- (id)exportedInterface;
- (void)onqueue_connectionEstablished;
- (void)_dismissUI;
- (void)_initialViewControllerDidDisappear;
- (void)_timingInvalidateMinTimer;
- (void)initialViewControllerDidAppear;
- (void)_activate;
- (void)requestAnimationDateWithCompletion:(id /* block */)a0;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)requestToShowUIWithHandler:(id /* block */)a0;
- (void)requestToStartAnimationAtDate:(id)a0;
- (id)machServiceName;
- (void)activate;
- (void)invalidate;
- (void)_initialViewControllerDidAppear;
- (void)_requestToDismissUIHandler:(id /* block */)a0;
- (void)_requestToStartAnimationAtDate:(id)a0;
- (void)_timingRestartMinTimer;
- (void)_invalidate;
- (void)_sendDismissUIWithReason:(long long)a0;
- (void)initialViewControllerDidDisappear;
- (void).cxx_destruct;
- (void)requestToDismissUIHandler:(id /* block */)a0;
- (void)sendDismissUIWithReason:(long long)a0;

@end

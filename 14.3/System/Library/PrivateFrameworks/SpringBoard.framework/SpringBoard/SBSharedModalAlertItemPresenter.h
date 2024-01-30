@class SBAlertItem, NSString, SBReachabilityManager, SBHomeGestureParticipant, SBSystemGestureManager, SBAlertLayoutPresentationVerifier, SBHomeGestureArbiter, SBBarSwipeAffordanceView, SBFWindow, SBModalViewControllerStack;
@protocol SBFLockOutStatusProvider;

@interface SBSharedModalAlertItemPresenter : NSObject <_SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBReachabilityObserver> {
    id<SBFLockOutStatusProvider> _lockOutProvider;
    SBSystemGestureManager *_systemGestureManager;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBReachabilityManager *_reachabilityManager;
    SBAlertLayoutPresentationVerifier *_alertLayoutPresentationVerifier;
    SBBarSwipeAffordanceView *_barSwipeView;
    SBFWindow *_window;
}

@property (retain, nonatomic, getter=_modalViewControllerStack, setter=_setModalViewControllerStack:) SBModalViewControllerStack *modalViewControllerStack;
@property (readonly, nonatomic) SBAlertItem *currentlyPresentedAlertItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleReachabilityYOffsetDidChange;
- (unsigned long long)barSwipeAffordanceView:(id)a0 systemGestureTypeForType:(long long)a1;
- (void)_updateBarSwipeViewWithAlertController:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_performActionForAlertController:(id)a0 invokeActionBlock:(id /* block */)a1 dismissControllerBlock:(id /* block */)a2;
- (void)homeGrabberViewDidReceiveClick:(id)a0;
- (void)modalViewControllerStack:(id)a0 willDismissViewController:(id)a1 animated:(BOOL)a2;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)modalViewControllerStack:(id)a0 didPresentViewController:(id)a1;
- (void)modalViewControllerStack:(id)a0 willPresentViewController:(id)a1;
- (void)dismissAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithLockOutProvider:(id)a0 systemGestureManager:(id)a1 homeGestureArbiter:(id)a2 reachabilityManager:(id)a3 alertLayoutPresentationVerifier:(id)a4 enableGestures:(BOOL)a5;
- (void)modalViewControllerStack:(id)a0 didDismissViewController:(id)a1;
- (id)initWithLockOutProvider:(id)a0 systemGestureManager:(id)a1 homeGestureArbiter:(id)a2 reachabilityManager:(id)a3 alertLayoutPresentationVerifier:(id)a4;
- (void)alertControllerDidDisappear:(id)a0;
- (void)_updateHomeGestureParticipantWithItemCountAdjustment:(long long)a0;
- (void)presentAlertItem:(id)a0 isLocked:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;

@end

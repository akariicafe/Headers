@class SBAlertItem, NSString, SBHomeGestureParticipant, SBSystemGestureManager, SBFZStackParticipant, SBReachabilityManager, SBHomeGestureArbiter, SBAlertLayoutPresentationVerifier, SBBarSwipeAffordanceView, SBFZStackResolver, SBModalViewControllerStack, SBFWindow;
@protocol SBFLockOutStatusProvider;

@interface SBSharedModalAlertItemPresenter : NSObject <_SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBReachabilityObserver> {
    id<SBFLockOutStatusProvider> _lockOutProvider;
    SBSystemGestureManager *_systemGestureManager;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBFZStackParticipant *_zStackParticipant;
    SBFZStackResolver *_zStackResolver;
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

- (void)dismissAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)zStackParticipantDidChange:(id)a0;
- (id)initWithLockOutProvider:(id)a0 systemGestureManager:(id)a1 homeGestureArbiter:(id)a2 zStackResolver:(id)a3 reachabilityManager:(id)a4 alertLayoutPresentationVerifier:(id)a5 enableGestures:(BOOL)a6;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;
- (void)homeGrabberViewDidReceiveClick:(id)a0;
- (void)alertControllerDidDisappear:(id)a0;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0;
- (void)_updateHomeGestureParticipant;
- (unsigned long long)barSwipeAffordanceView:(id)a0 systemGestureTypeForType:(long long)a1;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)_updateBarSwipeViewWithAlertController:(id)a0;
- (void)_performActionForAlertController:(id)a0 invokeActionBlock:(id /* block */)a1 dismissControllerBlock:(id /* block */)a2;
- (void)modalViewControllerStack:(id)a0 willDismissViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithLockOutProvider:(id)a0 systemGestureManager:(id)a1 homeGestureArbiter:(id)a2 zStackResolver:(id)a3 reachabilityManager:(id)a4 alertLayoutPresentationVerifier:(id)a5;
- (void)modalViewControllerStack:(id)a0 didPresentViewController:(id)a1;
- (void)modalViewControllerStack:(id)a0 didDismissViewController:(id)a1;
- (void)dealloc;
- (void)modalViewControllerStack:(id)a0 willPresentViewController:(id)a1;
- (void)presentAlertItem:(id)a0 isLocked:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)handleReachabilityYOffsetDidChange;

@end

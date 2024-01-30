@class SBWindow, SBAlertItem, NSString, SBSystemGestureManager, SBReachabilityManager, SBFZStackParticipant, SBAlertLayoutPresentationVerifier, SBBarSwipeAffordanceView, SBFZStackResolver, SBModalViewControllerStack, SBWindowScene;
@protocol SBFLockOutStatusProvider;

@interface SBSharedModalAlertItemPresenter : NSObject <_SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBReachabilityObserver> {
    id<SBFLockOutStatusProvider> _lockOutProvider;
    SBSystemGestureManager *_systemGestureManager;
    SBFZStackParticipant *_zStackParticipant;
    SBFZStackResolver *_zStackResolver;
    SBReachabilityManager *_reachabilityManager;
    SBAlertLayoutPresentationVerifier *_alertLayoutPresentationVerifier;
    SBBarSwipeAffordanceView *_barSwipeView;
    SBWindow *_window;
}

@property (retain, nonatomic, getter=_modalViewControllerStack, setter=_setModalViewControllerStack:) SBModalViewControllerStack *modalViewControllerStack;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (readonly, nonatomic) SBAlertItem *currentlyPresentedAlertItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleReachabilityYOffsetDidChange;
- (void)homeGrabberViewDidReceiveClick:(id)a0;
- (id)initWithLockOutProvider:(id)a0 systemGestureManager:(id)a1 reachabilityManager:(id)a2 alertLayoutPresentationVerifier:(id)a3 windowScene:(id)a4 enableGestures:(BOOL)a5;
- (void)modalViewControllerStack:(id)a0 didPresentViewController:(id)a1;
- (void)modalViewControllerStack:(id)a0 willDismissViewController:(id)a1 animated:(BOOL)a2;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;
- (void)dismissAlertItem:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentAlertItem:(id)a0 isLocked:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)dealloc;
- (void)_updateHomeGestureParticipant;
- (void)zStackParticipantDidChange:(id)a0;
- (void)_updateBarSwipeViewWithAlertController:(id)a0;
- (void)modalViewControllerStack:(id)a0 willPresentViewController:(id)a1;
- (unsigned long long)barSwipeAffordanceView:(id)a0 systemGestureTypeForType:(long long)a1;
- (void)_performActionForAlertController:(id)a0 invokeActionBlock:(id /* block */)a1 dismissControllerBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)modalViewControllerStack:(id)a0 didDismissViewController:(id)a1;
- (id)initWithLockOutProvider:(id)a0 systemGestureManager:(id)a1 reachabilityManager:(id)a2 alertLayoutPresentationVerifier:(id)a3 windowScene:(id)a4;
- (void)alertControllerDidDisappear:(id)a0;

@end

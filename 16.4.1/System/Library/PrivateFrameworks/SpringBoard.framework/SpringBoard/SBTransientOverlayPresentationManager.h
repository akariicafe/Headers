@class SBBannerManager, SBCoverSheetPresentationManager, NSString, SBAlertItemsController, SBIdleTimerCoordinatorHelper, SBLockStateAggregator, SBReachabilityManager, SBWindowSceneManager, NSMapTable;
@protocol SBIdleTimerCoordinating, SBTransientOverlayScenePresenterDelegate;

@interface SBTransientOverlayPresentationManager : NSObject <SBIdleTimerCoordinating, SBIdleTimerProviding, SBButtonEventsHandler> {
    SBWindowSceneManager *_windowSceneManager;
    NSMapTable *_presentersByWindowScene;
    SBAlertItemsController *_alertItemsController;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBLockStateAggregator *_lockStateAggregator;
    SBReachabilityManager *_reachabilityManager;
}

@property (retain, nonatomic) SBBannerManager *bannerManager;
@property (retain, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (weak, nonatomic) id<SBTransientOverlayScenePresenterDelegate> presenterDelegate;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (weak, nonatomic) id<SBIdleTimerCoordinating> idleTimerCoordinator;
@property (readonly, nonatomic) BOOL hasActivePresentation;
@property (readonly, nonatomic) BOOL canActivePresentationBecomeLocalFirstResponder;
@property (readonly, nonatomic) BOOL canActivePresentationBecomeFirstResponder;
@property (readonly, nonatomic) long long presentedViewControllerCount;
@property (readonly, nonatomic) BOOL shouldUseSceneBasedKeyboardFocusForActivePresentation;
@property (readonly, nonatomic) BOOL prefersStatusBarActivityItemVisible;
@property (readonly, nonatomic) BOOL shouldDisableControlCenter;
@property (readonly, nonatomic) BOOL shouldDisableCoverSheetGesture;
@property (readonly, nonatomic) BOOL shouldDisableSiri;
@property (readonly, nonatomic) BOOL activePresentationPreventsDragAndDrop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowSceneDidDisconnect:(id)a0;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)isPresentingViewController:(id)a0;
- (BOOL)handleHomeButtonDoublePress;
- (void)windowSceneDidConnect:(id)a0;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHomeButtonPress;
- (BOOL)hasPresentationAboveWindowLevel:(double)a0;
- (BOOL)handleLockButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)hasActivePresentationFromProcess:(id)a0;
- (id)topmostPresentedViewController;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (id)transientOverlayPresenterForWindowScene:(id)a0;
- (void)performDismissalRequest:(id)a0;
- (BOOL)hasActiveSpotlightPresentation;
- (id)initWithWindowSceneManager:(id)a0 alertItemsController:(id)a1 lockStateAggregator:(id)a2 reachabilityManager:(id)a3;
- (BOOL)hasActivePresentationFromBundleIdentifier:(id)a0;
- (void)dealloc;
- (id)defaultDisplayConfigurationForTransientOverlayPresentation;
- (BOOL)hasActivePresentationForWindowScene:(id)a0;
- (BOOL)isTopmostPresentedViewController:(id)a0;
- (void)performPresentationRequest:(id)a0;
- (void).cxx_destruct;

@end

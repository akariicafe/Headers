@class SBControlCenterController, CSCoverSheetViewController, SBModalAlertPresentationCoordinator, SBAlertItemsController, SBReachabilitySceneController, NSString, SBWindowScenePIPManager, SBSystemGestureManager, SBModalLibraryController, SBMedusaHostedKeyboardWindowController, SBLockedPointerManager, SBLockScreenManager, SBSceneLayoutStateProvider, SBFZStackResolver, SBSwitcherController, SBLayoutStateTransitionCoordinator, SBFTraitsArbiter, SBWindowHidingManager, SBModalUIFluidDismissGestureManager, SBDisplayAppInteractionEventSource, SBTraitsPipelineManager, SBSystemApertureController, SBSceneManager, SBWallpaperController, SBCoverSheetPresentationManager, SBMainDisplayLayoutStateManager, SBFloatingDockController, BNBannerController, SBSystemPointerInteractionManager, SBTransientUIInteractionManager, SBRecordingIndicatorManager;
@protocol SBAssistantSceneControlling, FBSDisplayLayoutPublishing, SBTransientOverlayPresenting, SBUILockStateProviding, SBWindowSceneDelegate;

@interface SBWindowScene : UIWindowScene <SBWindowSceneContextProviding> {
    BOOL _isInvalidating;
    BOOL _isInvalidated;
}

@property (retain, nonatomic) id<SBWindowSceneDelegate> delegate;
@property (readonly, nonatomic) BOOL isMainDisplayWindowScene;
@property (readonly, nonatomic) BOOL isExternalDisplayWindowScene;
@property (readonly, nonatomic) SBAlertItemsController *alertItemsController;
@property (readonly, nonatomic) SBDisplayAppInteractionEventSource *appInteractionEventSource;
@property (readonly, nonatomic) id<SBAssistantSceneControlling> assistantController;
@property (readonly, nonatomic) BNBannerController *bannerController;
@property (readonly, nonatomic) SBControlCenterController *controlCenterController;
@property (readonly, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, nonatomic) id<FBSDisplayLayoutPublishing> displayLayoutPublisher;
@property (readonly, nonatomic) SBFloatingDockController *floatingDockController;
@property (readonly, nonatomic) SBSceneLayoutStateProvider *layoutStateProvider;
@property (readonly, nonatomic) SBMainDisplayLayoutStateManager *layoutStateManager;
@property (readonly, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (readonly, nonatomic) SBLockedPointerManager *lockedPointerManager;
@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager;
@property (readonly, nonatomic) SBMedusaHostedKeyboardWindowController *medusaHostedKeyboardWindowController;
@property (readonly, nonatomic) id<SBUILockStateProviding> uiLockStateProvider;
@property (readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (readonly, nonatomic) SBModalLibraryController *modalLibraryController;
@property (readonly, nonatomic) SBModalUIFluidDismissGestureManager *modalUIFluidDismissGestureManager;
@property (readonly, nonatomic) SBWindowScenePIPManager *pictureInPictureManager;
@property (readonly, nonatomic) SBReachabilitySceneController *reachabilityController;
@property (readonly, nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager;
@property (readonly, nonatomic) SBSwitcherController *switcherController;
@property (readonly, nonatomic) SBSystemApertureController *systemApertureController;
@property (readonly, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (readonly, nonatomic) SBSystemPointerInteractionManager *systemPointerInteractionManager;
@property (readonly, nonatomic) SBFTraitsArbiter *traitsArbiter;
@property (readonly, nonatomic) SBTraitsPipelineManager *traitsPipelineManager;
@property (readonly, nonatomic) id<SBTransientOverlayPresenting> transientOverlayPresenter;
@property (readonly, nonatomic) SBWallpaperController *wallpaperController;
@property (readonly, nonatomic) SBWindowHidingManager *windowHidingManager;
@property (readonly, nonatomic) SBFZStackResolver *zStackResolver;
@property (readonly, nonatomic) SBTransientUIInteractionManager *transientUIInteractionManager;
@property (readonly, nonatomic) SBSceneManager *sceneManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setInvalidating:(BOOL)a0;
- (BOOL)isInvalidated;
- (BOOL)isInvalidating;
- (id)succinctDescriptionBuilder;
- (BOOL)_windowsIgnoreSceneClientOrientation;
- (id)_abstractWindowSceneDelegate;
- (id)succinctDescription;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toNeighboringDisplayWindowScene:(id)a1;
- (void)invalidate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toNeighboringDisplayWindowScene:(id)a1;

@end

@class SBControlCenterController, CSCoverSheetViewController, SBModalAlertPresentationCoordinator, SBWindowScene, SBAlertItemsController, NSString, SBReachabilitySceneController, SBSystemGestureManager, SBWindowScenePIPManager, SBModalLibraryController, SBMedusaHostedKeyboardWindowController, SBLockedPointerManager, UIScene, SBFZStackResolver, SBSceneLayoutStateProvider, SBLockScreenManager, SBSwitcherController, SBLayoutStateTransitionCoordinator, SBFTraitsArbiter, SBWindowHidingManager, SBModalUIFluidDismissGestureManager, SBDisplayAppInteractionEventSource, SBTraitsPipelineManager, SBSystemApertureController, SBSceneManager, SBWallpaperController, SBCoverSheetPresentationManager, SBMainDisplayLayoutStateManager, SBFloatingDockController, SBSystemPointerInteractionManager, BNBannerController, SBTransientUIInteractionManager, SBRecordingIndicatorManager;
@protocol SBAssistantSceneControlling, FBSDisplayLayoutPublishing, SBTransientOverlayPresenting, SBUILockStateProviding;

@interface SBWindowSceneContext : NSObject <_UISceneComponentProviding, SBWindowSceneContextProviding> {
    SBWindowScene *_sbWindowScene;
    SBMedusaHostedKeyboardWindowController *_medusaHostedKeyboardWindowController;
}

@property (retain, nonatomic) id<SBAssistantSceneControlling> assistantController;
@property (retain, nonatomic) id<FBSDisplayLayoutPublishing> displayLayoutPublisher;
@property (retain, nonatomic) SBFloatingDockController *floatingDockController;
@property (retain, nonatomic) SBSceneLayoutStateProvider *layoutStateProvider;
@property (retain, nonatomic) SBMainDisplayLayoutStateManager *layoutStateManager;
@property (retain, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (retain, nonatomic) SBLockedPointerManager *lockedPointerManager;
@property (retain, nonatomic) SBModalLibraryController *modalLibraryController;
@property (retain, nonatomic) SBModalUIFluidDismissGestureManager *modalUIFluidDismissGestureManager;
@property (retain, nonatomic) SBReachabilitySceneController *reachabilityController;
@property (retain, nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager;
@property (retain, nonatomic) SBSwitcherController *switcherController;
@property (retain, nonatomic, setter=setUILockStateProvider:) id<SBUILockStateProviding> uiLockStateProvider;
@property (retain, nonatomic) SBSystemApertureController *systemApertureController;
@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (retain, nonatomic) SBSystemPointerInteractionManager *systemPointerInteractionManager;
@property (retain, nonatomic) SBWindowScenePIPManager *pictureInPictureManager;
@property (retain, nonatomic) SBFTraitsArbiter *traitsArbiter;
@property (retain, nonatomic) SBTraitsPipelineManager *traitsPipelineManager;
@property (retain, nonatomic) SBWindowHidingManager *windowHidingManager;
@property (retain, nonatomic) SBFZStackResolver *zStackResolver;
@property (retain, nonatomic) SBTransientUIInteractionManager *transientUIInteractionManager;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBAlertItemsController *alertItemsController;
@property (readonly, nonatomic) SBDisplayAppInteractionEventSource *appInteractionEventSource;
@property (readonly, nonatomic) BNBannerController *bannerController;
@property (readonly, nonatomic) SBControlCenterController *controlCenterController;
@property (readonly, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager;
@property (readonly, nonatomic) SBMedusaHostedKeyboardWindowController *medusaHostedKeyboardWindowController;
@property (readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (readonly, nonatomic) id<SBTransientOverlayPresenting> transientOverlayPresenter;
@property (readonly, nonatomic) SBWallpaperController *wallpaperController;
@property (readonly, nonatomic) SBSceneManager *sceneManager;

- (id)initWithScene:(id)a0;
- (void).cxx_destruct;

@end

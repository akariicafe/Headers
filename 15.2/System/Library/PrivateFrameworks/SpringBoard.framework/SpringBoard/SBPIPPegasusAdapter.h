@class BSAbsoluteMachTimer, NSString, SBPIPAnalytics, NSMutableSet, PGPictureInPictureController, SBAppStatusBarSettingsAssertion, SBPIPController;
@protocol SBPIPControllerAdapterContextProviding, BSInvalidatable;

@interface SBPIPPegasusAdapter : NSObject <PGPictureInPictureControllerDelegate, SBPIPContainerViewControllerObserver, SBBannerManagerTransitionObserver, SBPIPControllerAdapter> {
    SBPIPController<SBPIPControllerAdapterContextProviding> *_pipController;
    NSMutableSet *_presentedExpanseBanners;
    PGPictureInPictureController *_pegasusController;
    SBPIPAnalytics *_analyticsHelper;
    BSAbsoluteMachTimer *_pipDefaultContentSizeResetTimer;
    SBAppStatusBarSettingsAssertion *_appStatusBarSettingsAssertion;
    BOOL _isReducingResourcesUsage;
    id<BSInvalidatable> _hideFaceTimePIPFromSharePlayScreenSharingAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAutoPictureInPictureSupported;
+ (BOOL)isSupported;

- (void)_updateHideFromClonedDisplaysAssertion;
- (void)bannerManager:(id)a0 containerWillTransitionToSize:(struct CGSize { double x0; double x1; })a1 withTransitionCoordinator:(id)a2;
- (void)containerViewControllerStartReducingResourcesUsage:(id)a0;
- (id)pipController:(id)a0 morphAnimatorDataSourceForTargetProcessIdentifier:(int)a1 scenePersistenceIdentifier:(id)a2 gestureInitiated:(BOOL)a3;
- (void)_postEnsuredInSwitcher_pictureInPictureController:(id)a0 didRequestStopForPictureInPictureViewController:(id)a1 sourceSceneSessionIdentifier:(id)a2 animated:(BOOL)a3;
- (BOOL)pictureInPictureController:(id)a0 shouldAuthorizeBackgroundPIPForAppWithBundleIdentifier:(id)a1;
- (void)pictureInPictureController:(id)a0 didRequestStopForPictureInPictureViewController:(id)a1 sourceSceneSessionIdentifier:(id)a2 animated:(BOOL)a3;
- (void)pictureInPictureController:(id)a0 didHidePictureInPictureViewController:(id)a1;
- (void)setPIPController:(id)a0;
- (void)pictureInPictureController:(id)a0 didCreatePictureInPictureViewController:(id)a1;
- (void)_actuallyUpdateBannerInsetsForExpanseWithSizeChanging:(BOOL)a0 isFullScreen:(BOOL)a1;
- (void)bannerManager:(id)a0 willPresentPresentable:(id)a1 withTransitionCoordinator:(id)a2;
- (BOOL)shouldStartPictureInPictureForPIPController:(id)a0 applicationWithProcessIdentifierEnteringBackground:(int)a1 scenePersistenceIdentifier:(id)a2;
- (void)pipController:(id)a0 willEndPIPInterruptionForAssertion:(id)a1;
- (BOOL)_layoutStateContainsSceneForSourceSceneSessionIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (BOOL)pictureInPictureController:(id)a0 shouldDenyNewConnection:(id)a1;
- (long long)tetheringModeForScenePersistenceIdentifier:(id)a0;
- (void)containerViewControllerStopReducingResourcesUsage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateBannerInsetsForExpanseWithSizeChanging:(BOOL)a0 isFullScreen:(BOOL)a1;
- (void)_updateAppStatusBarSettingsAssertion;
- (BOOL)isPictureInPictureActiveForPIPController:(id)a0;
- (void)pipController:(id)a0 willStartPictureInPictureTestActionForApplicationWithBundleIdentifier:(id)a1;
- (BOOL)pictureInPictureControllerCanBackgroundStartForFaceTimeVideoCall:(id)a0;
- (void)bannerManager:(id)a0 willDismissPresentable:(id)a1 withTransitionCoordinator:(id)a2;
- (void)pictureInPictureController:(id)a0 willDestroyPictureInPictureViewController:(id)a1;
- (void)bannerManager:(id)a0 presentable:(id)a1 willTransitionToSize:(struct CGSize { double x0; double x1; })a2 withTransitionCoordinator:(id)a3;
- (BOOL)isStartingStoppingOrCancellingPictureInPictureForPIPController:(id)a0;
- (void)pipController:(id)a0 didStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)a1 scenePersistenceIdentifier:(id)a2 animated:(BOOL)a3 completionHandler:(id /* block */)a4;
- (BOOL)isPresentingPictureInPictureForPIPController:(id)a0 applicationBundleIdentifier:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_bannerPresentableWillAnimateTransition:(id)a0 isPresentation:(BOOL)a1 isDismissal:(BOOL)a2 isFullScreen:(BOOL)a3 withTransitionCoordinator:(id)a4;
- (BOOL)preventStashAssertionsForPIPController:(id)a0;
- (void)pipController:(id)a0 willRestorePictureInPictureForTestForApplicationWithBundleIdentifier:(id)a1;
- (void)dealloc;
- (void)pictureInPictureController:(id)a0 willHidePictureInPictureViewController:(id)a1;
- (long long)_reasonForAssertion:(id)a0;
- (void)_enumerateContainerViewControllersForApplication:(id)a0 scenePersistenceIdentifier:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)_presentableIsDodgeableAndStatusBarSuppressing:(id)a0;
- (long long)contentTypeForPIPController:(id)a0;
- (void)_updateHasIdleTimerBehaviors;
- (BOOL)pipController:(id)a0 willBeginPIPInterruptionForAssertion:(id)a1;
- (void)containerViewControllerDidUpdatePrefersHiddenFromClonedDisplays:(id)a0;
- (void)pipController:(id)a0 didCancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)a1 scenePersistenceIdentifier:(id)a2;
- (BOOL)isStoppingOrCancellingPictureForPIPController:(id)a0 applicationWithBundleIdentifier:(id)a1 scenePersistenceIdentifier:(id)a2;

@end

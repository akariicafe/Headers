@class NSString, SBDeviceApplicationRemoteTransientOverlayContainerViewController, NSMapTable, NSMutableArray;

@interface SBDeviceApplicationRemoteTransientOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBTransientOverlayViewControllerDelegate> {
    NSMutableArray *_activePresentationContexts;
    SBDeviceApplicationRemoteTransientOverlayContainerViewController *_containerVC;
    NSMapTable *_keyboardFocusRedirectionsByRemoteVC;
    BOOL _needsDeactivationWithNoActiveTransientOverlays;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)a0;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)a0;
- (void)transientOverlayViewControllerDidEndRotation:(id)a0;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)a0;
- (void)dismissRemoteTransientOverlayViewController:(id)a0;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)a0;
- (void).cxx_destruct;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)a0;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)a0;
- (void)dealloc;
- (void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(id)a0;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)a0;
- (id)_realOverlayViewController;
- (BOOL)isPresentingTransientOverlay:(id)a0;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)a0;
- (void)_activateIfPossible;
- (void)_handleCoverSheetDidPresent:(id)a0;
- (void)_dismissRemoteOverlayVC:(id)a0;
- (BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)a0;
- (void)transientOverlayViewControllerWillBeginRotation:(id)a0 toInterfaceOrientation:(long long)a1;
- (BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)a0;
- (void)_deactivateIfPossible;
- (BOOL)shouldFollowSceneOrientation;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)a0;
- (void)presentRemoteTransientOverlayViewController:(id)a0 presentationTarget:(id)a1;
- (void)_handleAppSwitcherWillPresent:(id)a0;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)a0;

@end

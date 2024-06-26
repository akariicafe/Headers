@class BSAnimationSettings, NSString, SBTransientOverlayWallpaperEffectView, SBRemoteTransientOverlayHostViewController, UIView, SBIdleTimerCoordinatorHelper;
@protocol SBRemoteTransientOverlayViewControllerDelegate;

@interface SBRemoteTransientOverlayViewController : SBTransientOverlayViewController <SBRemoteTransientOverlayHostViewControllerDelegate, SBIdleTimerCoordinating> {
    SBRemoteTransientOverlayHostViewController *_contentViewController;
    UIView *_contentViewWrapperView;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    BOOL _isPresented;
    long long _lastWallpaperStyle;
    BSAnimationSettings *_pendingAnimationSettings;
    long long _wallpaperEffectAnimations;
    SBTransientOverlayWallpaperEffectView *_wallpaperEffectView;
}

@property (readonly, nonatomic, getter=isActivatingForSiri) BOOL activatingForSiri;
@property (readonly, nonatomic) BOOL isScreenshotMarkup;
@property (readonly, nonatomic) BOOL shouldInvalidateWhenDeactivated;
@property (readonly, nonatomic, getter=isSwitcherEligible) BOOL switcherEligible;
@property (readonly, nonatomic) long long preferredDismissalAnimationStyle;
@property (weak, nonatomic) id<SBRemoteTransientOverlayViewControllerDelegate> delegate;
@property (nonatomic) long long wallpaperVariant;
@property (weak, nonatomic) SBRemoteTransientOverlayViewController *pairedRemoteTransientOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestViewControllersForAlertDefinition:(id)a0 connectionHandler:(id /* block */)a1;

- (BOOL)handleHomeButtonLongPress;
- (BOOL)shouldAutorotate;
- (id)associatedBundleIdentifiersToSuppressInSystemAperture;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)handleHomeButtonDoublePress;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleLockButtonPress;
- (BOOL)becomeFirstResponder;
- (BOOL)handleVolumeDownButtonPress;
- (void)setIdleTimerCoordinator:(id)a0;
- (void)setContainerOrientation:(long long)a0;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)prefersStatusBarActivityItemVisible;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)_canShowWhileLocked;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (long long)preferredWhitePointAdaptivityStyle;
- (int)_preferredStatusBarVisibility;
- (void)didInvalidate;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (BOOL)handleDoubleHeightStatusBarTap;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)shouldDisableControlCenter;
- (BOOL)resignFirstResponder;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldDisableSiri;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)canResignFirstResponder;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isContentOpaque;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (int)serviceProcessIdentifier;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didTransitionToAttachedToWindowedAccessory:(BOOL)a0 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)preferredStatusBarStyleOverridesToSuppress;
- (id)_initWithContentViewController:(id)a0;
- (void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(id)a0;
- (BOOL)shouldDisableOrientationUpdates;
- (void)remoteTransientOverlayHostViewController:(id)a0 didTerminateWithError:(id)a1;
- (void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(id)a0;
- (void)_configureWallpaperEffectViewWithAnimationSettings:(id)a0;
- (BOOL)_needsWallpaperEffectView;
- (void)_setMediaOverridePID:(int)a0;
- (BOOL)allowsStackingOverlayContentAbove;
- (void)beginIgnoringAppearanceUpdates;
- (void)beginIgnoringContentOverlayInsetUpdates;
- (long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostViewController:(id)a0;
- (void)endIgnoringAppearanceUpdates;
- (void)endIgnoringContentOverlayInsetUpdates;
- (void)handleGestureDismissal;
- (void)handlePictureInPictureDidBegin;
- (BOOL)hasServiceProcessIdentifier:(int)a0;
- (BOOL)isPresentedByBundleIdentifier:(id)a0;
- (BOOL)isPresentedByProcess:(id)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (int)pictureInPictureProcessIdentifier;
- (id)preferredDisplayLayoutElementIdentifier;
- (long long)preferredLockedGestureDismissalStyle;
- (id)preferredSceneDeactivationReasonValue;
- (long long)preferredUnlockedGestureDismissalStyle;
- (void)prepareForActivationWithContext:(id)a0 presentationMode:(long long)a1 completion:(id /* block */)a2;
- (void)preserveInputViewsAnimated:(BOOL)a0;
- (id)remoteTransientOverlayHostViewController:(id)a0 requestsActionForHandlingButtonEvents:(unsigned long long)a1;
- (void)remoteTransientOverlayHostViewController:(id)a0 requestsWallpaperEffectUpdateWithAnimationSettings:(id)a1;
- (void)remoteTransientOverlayHostViewControllerDidChangeGestureDismissalStyles:(id)a0;
- (void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(id)a0;
- (void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(id)a0;
- (void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(id)a0;
- (void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(id)a0;
- (id)representedDisplayItem;
- (void)restoreInputViewsAnimated:(BOOL)a0;
- (BOOL)shouldDisableBanners;
- (BOOL)shouldDisableInteractiveScreenshotGesture;
- (BOOL)shouldDisableReachability;
- (BOOL)shouldPendAlertItems;

@end

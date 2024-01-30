@class UIView, FBSDisplayConfiguration, UITapGestureRecognizer, NSString, SBSpotlightTransientOverlaySpotlightViewController, SBModalUIFluidDismissGestureManager, UIPanGestureRecognizer, UIVisualEffectView, SBSpotlightSettings;
@protocol SBTransientOverlayTransitionContextProviding, SBSpotlightTransientOverlayViewControllerDelegate;

@interface SBSpotlightTransientOverlayViewController : SBTransientOverlayViewController <SPUIRemoteSearchViewDelegate> {
    UIVisualEffectView *_blurEffectView;
    SBSpotlightTransientOverlaySpotlightViewController *_spotlightViewController;
    BOOL _presentingInteractively;
    BOOL _performedAlongsideAnimations;
    id<SBTransientOverlayTransitionContextProviding> _interactivePresentationContextProvider;
}

@property (retain, nonatomic) SBSpotlightSettings *settings;
@property (retain, nonatomic) UIView *scalingView;
@property (nonatomic) unsigned long long animationCount;
@property (retain, nonatomic) SBModalUIFluidDismissGestureManager *modalUIDismissGestureManager;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapToDismissGestureRecognizer;
@property (weak, nonatomic) id<SBSpotlightTransientOverlayViewControllerDelegate> delegate;
@property (weak, nonatomic) FBSDisplayConfiguration *targetDisplayConfiguration;
@property (nonatomic) unsigned long long presentationSource;
@property (nonatomic) unsigned long long dismissalSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissSearchView;
- (BOOL)shouldAutorotate;
- (BOOL)handleHomeButtonPress;
- (BOOL)_canShowWhileLocked;
- (int)_preferredStatusBarVisibility;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_handlePanGestureRecognizer:(id)a0;
- (BOOL)isContentOpaque;
- (id)hostedSceneIdentityTokens;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (BOOL)prefersWindowHitTestingDisabled;
- (void)_configureBlurFilterOnView:(id)a0;
- (void)_handleTapToDismissGestureRecognizer:(id)a0;
- (BOOL)_isReduceMotionOrTransparency;
- (BOOL)_isSpotlightVisible;
- (void)_setSpotlightAlpha:(double)a0 scale:(double)a1 blurProgress:(double)a2 translation:(struct CGPoint { double x0; double x1; })a3 withAnimationMode:(long long)a4 alongsideAnimationBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (void)_setSpotlightPresented:(BOOL)a0 withAnimationMode:(long long)a1 alongsideAnimationBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)allowsStackingOverlayContentAbove;
- (void)beginInteractivePresentation;
- (BOOL)dismissesForCoverSheetPresentation;
- (BOOL)dismissesSiriForPresentation;
- (void)endInteractivePresentation:(BOOL)a0;
- (void)handleGestureDismissal;
- (long long)homeAffordanceSuppression;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (id)presentationDimmingViewColor;
- (BOOL)preservesAppSwitcherDuringPresentationAndDismissal;
- (BOOL)preventsClippingToBounds;
- (id /* block */)sceneDeactivationPredicate;
- (BOOL)shouldPreventDragAndDrop;
- (void)updateInteractivePresentationWithProgress:(double)a0 translation:(double)a1;

@end

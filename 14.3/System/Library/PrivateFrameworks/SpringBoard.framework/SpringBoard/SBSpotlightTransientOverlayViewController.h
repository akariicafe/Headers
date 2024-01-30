@class UIView, NSString, UITapGestureRecognizer, SBSpotlightTransientOverlaySpotlightViewController, SBModalUIFluidDismissGestureManager, UIPanGestureRecognizer, UIVisualEffectView, SBSpotlightSettings;
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
@property (nonatomic) unsigned long long presentationSource;
@property (nonatomic) unsigned long long dismissalSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleHomeButtonPress;
- (void).cxx_destruct;
- (void)dismissSearchView;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_handlePanGestureRecognizer:(id)a0;
- (BOOL)shouldAutorotate;
- (int)_preferredStatusBarVisibility;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)isContentOpaque;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (long long)preferredUnlockedGestureDismissalStyle;
- (BOOL)allowsStackingOverlayContentAbove;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)initWithModalUIFluidDismissGestureManager:(id)a0;
- (BOOL)preservesAppSwitcherDuringPresentationAndDismissal;
- (BOOL)dismissesSiriForPresentation;
- (void)beginInteractivePresentation;
- (void)updateInteractivePresentationWithProgress:(double)a0 translation:(double)a1;
- (void)endInteractivePresentation:(BOOL)a0;
- (void)handleGestureDismissal;
- (long long)preferredLockedGestureDismissalStyle;
- (id)preferredDisplayLayoutElementIdentifier;
- (id /* block */)sceneDeactivationPredicate;
- (BOOL)dismissesForCoverSheetPresentation;
- (BOOL)shouldPreventDragAndDrop;
- (BOOL)prefersWindowHitTestingDisabled;
- (long long)homeAffordanceSuppression;
- (void)_handleTapToDismissGestureRecognizer:(id)a0;
- (void)_setSpotlightPresented:(BOOL)a0 withAnimationMode:(long long)a1 alongsideAnimationBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)_isSpotlightVisible;
- (void)_setSpotlightAlpha:(double)a0 scale:(double)a1 blurProgress:(double)a2 translation:(struct CGPoint { double x0; double x1; })a3 withAnimationMode:(long long)a4 alongsideAnimationBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (void)_configureBlurFilterOnView:(id)a0;
- (id)presentationDimmingViewColor;
- (BOOL)preventsClippingToBounds;

@end

@class PGStashView, NSUUID, MTShadowView, PGStashedMaskView, PGControlsContainerView, UITapGestureRecognizer, UIView, NSString, PGHostedWindowHostingHandle, PGPortalView, PGLayerHostView, PGPictureInPictureApplication, PGControlsViewModel;
@protocol PGPictureInPictureViewControllerContentContainer, PGPictureInPictureAnalyticsDelegate, PGPictureInPictureViewControllerDelegate;

@interface PGPictureInPictureViewController : UIViewController <PGCommandHandler, PGPlaybackStateDiffConsumer> {
    PGHostedWindowHostingHandle *_hostedWindowHostingHandle;
    UIView *_backgroundView;
    UIView *_containerView;
    PGLayerHostView *_contentView;
    PGControlsContainerView *_controlsContainerView;
    PGControlsViewModel *_viewModel;
    MTShadowView *_shadowView;
    PGStashView *_stashView;
    MTShadowView *_tabShadowView;
    PGStashedMaskView *_stashMaskView;
    PGPortalView *_leftSideContentPortalView;
    PGPortalView *_rightSideContentPortalView;
    BOOL _initialLayerFrameIsNull;
    BOOL _prefersIdleTimerDisabled;
    BOOL _isSuspended;
    BOOL _stashTabHidden;
    BOOL _stashTabShownLeft;
    BOOL _isShowingChrome;
    unsigned long long _inFlightStashTabAnimationIdentifier;
    unsigned long long _inFlightStashProgressAnimationIdentifier;
    UITapGestureRecognizer *_stashedTapGestureRecognizer;
    struct CGSize { double width; double height; } _preferredContentSize;
    id<PGPictureInPictureAnalyticsDelegate> _analyticsDelegate;
    NSUUID *_analyticsSourceUUID;
    NSUUID *_analyticsSessionUUID;
    BOOL _startedAutomatically;
    struct { unsigned char prepareStopAnimationWithCompletionHandler : 1; unsigned char acquireInterfaceOrientationLock : 1; unsigned char relinquishInterfaceOrientationLock : 1; unsigned char handleTapWhileStashedGesture : 1; unsigned char handleDoubleTapGesture : 1; unsigned char performRotateAnimationWithRotation : 1; } _contentContainerRespondsTo;
}

@property (class, readonly, nonatomic) double contentViewCornerRadius;

@property (copy, nonatomic) id /* block */ waitForUIFinalizationCompletionBlock;
@property (readonly, nonatomic) long long controlsStyle;
@property (retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (weak, nonatomic) id<PGPictureInPictureViewControllerDelegate> delegate;
@property (nonatomic, getter=isInterrupted) BOOL interrupted;
@property (readonly, nonatomic) PGControlsViewModel *viewModel;
@property (readonly, weak, nonatomic) PGPictureInPictureApplication *application;
@property (weak, nonatomic) id<PGPictureInPictureViewControllerContentContainer> contentContainer;
@property (nonatomic) BOOL canStartShowingChrome;
@property (readonly, nonatomic) UIView *contentContainerView;
@property (nonatomic, getter=isInteractivelyResizing) BOOL interactivelyResizing;
@property (readonly, nonatomic) double preferredMinimumWidth;
@property (nonatomic) struct CGSize { double width; double height; } minimumStashTabSize;
@property (nonatomic) BOOL stashed;
@property (readonly, nonatomic) BOOL isStashTabHidden;
@property (readonly, nonatomic) BOOL prefersIdleTimerDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)animateViewWithAnimationType:(long long)a0 initialSpringVelocity:(double)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)handleCommand:(id)a0;
- (BOOL)showsPictureInPictureUnavailableIndicator;
- (void)setShowsPictureInPictureUnavailableIndicator:(BOOL)a0;
- (void)updatePlaybackStateWithDiff:(id)a0;
- (void)hostedWindowSizeChangeBegan;
- (void)hostedWindowSizeChangeEnded;
- (void)deactivateAnalyticsSessionIfNeeded;
- (void)notePictureInPictureStartedAutomatically:(BOOL)a0;
- (void)performSuspendAnimationWithCompletionHandler:(id /* block */)a0;
- (void)performResumeAnimationWithCompletionHandler:(id /* block */)a0;
- (void)notePictureInPictureWillStopForAppRequest:(BOOL)a0 preferredFullScreenRestore:(BOOL)a1;
- (void)performStopAnimated:(BOOL)a0 withFinalInterfaceOrientation:(long long)a1 finalLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completionHandler:(id /* block */)a3;
- (id)initWithApplication:(id)a0 controlsStyle:(long long)a1;
- (void)setAnalyticsDelegate:(id)a0 analyticsSourceUUID:(id)a1;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)a0 initialLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(id /* block */)a2;
- (void)performStartAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)performRotateAnimationWithRotation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)prepareStopAnimationWithCompletionHandler:(id /* block */)a0;
- (void)setStashProgress:(double)a0;
- (void)_handleTapWhileStashedGestureRecognizer:(id)a0;
- (void)_updatePrefersIdleTimerDisabled;
- (void)acquireInterfaceOrientationLock;
- (void)relinquishInterfaceOrientationLock;
- (void)showChrome:(BOOL)a0 animated:(BOOL)a1;
- (void)_resetStashTabViewsIfPossible;
- (void)_loadShadowViewIfNeeded;
- (void)_setStashedTabHidden:(BOOL)a0 left:(BOOL)a1;
- (void)_addMaskViewSubviewIfNeeded;
- (void)_layoutStashTabViewsIfNeeded;
- (void)_setPortalActive:(BOOL)a0 left:(BOOL)a1;
- (void)_setStashMaskActive:(BOOL)a0;
- (void)_updateContentCornerRadiusForMaskActive:(BOOL)a0;
- (void)_performStartAnimationWithCompletionHandler:(id /* block */)a0;
- (void)_performStopAnimationWithFinalInterfaceOrientation:(long long)a0 finalLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(id /* block */)a2;
- (void)updateHostedWindowSize:(struct CGSize { double x0; double x1; })a0;
- (void)setStashTabHidden:(BOOL)a0 left:(BOOL)a1 withSpringBehavior:(id)a2;
- (void)setContentViewHidden:(BOOL)a0;

@end

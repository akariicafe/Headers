@class UIViewController, NSString, _TVRUICubicSpringAnimator, UIViewPropertyAnimator, CCUIContentModuleContext, TVRUIHintsViewController, TVRUIRemoteViewController;

@interface TVRMContentViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController>

@property (readonly, nonatomic, getter=isShowingButtonGlyph) BOOL showButtonGlyph;
@property (retain, nonatomic) TVRUIRemoteViewController *remoteControlViewController;
@property (retain, nonatomic) TVRUIHintsViewController *hintsViewController;
@property (retain, nonatomic) NSString *lastActiveEndpointIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } transitionSize;
@property (retain, nonatomic) _TVRUICubicSpringAnimator *remoteShowAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *remoteDismissAnimator;
@property (nonatomic) BOOL systemInitiatedDismissal;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (retain, nonatomic) UIViewController *backgroundViewController;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)displayWillTurnOff;
- (BOOL)canDismissPresentedContent;
- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldFinishTransitionToExpandedContentModule;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_prewarm;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_defaultScaledTransformForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_dismissChildViewControllersPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_shouldLaunchAsViewService;
- (void)_requestLaunchAsViewService;
- (void)_createRemoteControlViewControllerIfNeeded;
- (void)_startRemoteControlViewController;
- (void)_stopRemoteControlViewController;
- (void)_remoteLaunchedAsViewService:(id)a0;

@end

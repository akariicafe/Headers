@class NSString, PUAbstractNavigationBanner, _UINavigationControllerPalette, UIKeyCommand, UIViewController;

@interface PUNavigationController : UINavigationController <PXForcedDismissableViewController, UINavigationControllerDelegate>

@property (retain, nonatomic, setter=_setBanner:) PUAbstractNavigationBanner *_banner;
@property (retain, nonatomic, setter=_setPalette:) _UINavigationControllerPalette *_palette;
@property (retain, nonatomic, setter=_setAlternateBackKeyCommand:) UIKeyCommand *_alternateBackKeyCommand;
@property (nonatomic, getter=_isNavigating, setter=_setNavigating:) BOOL _navigating;
@property (readonly, nonatomic) unsigned long long pu_supportedInterfaceOrientations;
@property (readonly, nonatomic) BOOL pu_preventsAutorotation;
@property (nonatomic, setter=_setBarStyle:) long long _barStyle;
@property (weak, nonatomic, setter=_setCurrentToolbarViewController:) UIViewController *_currentToolbarViewController;
@property (nonatomic, setter=pu_setAlwaysForwardsPreferredStatusBarStyle:) BOOL pu_alwaysForwardsPreferredStatusBarStyle;
@property (nonatomic, setter=pu_setAlwaysForwardsPreferredStatusBarHidden:) BOOL pu_alwaysForwardsPrefersStatusBarHidden;
@property (copy, nonatomic, setter=ppt_setOnDidShowViewControllerBlock:) id /* block */ ppt_onDidShowViewControllerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)_updateBarStyle;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)_shouldOptOutFromChromelessBars;
- (void)pu_navigationTransitionDidEnd:(id)a0;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)childViewControllerForStatusBarHidden;
- (void)_updateStatusBarOverrides;
- (id)childViewControllerForStatusBarStyle;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)pu_setSupportedInterfaceOrientations:(unsigned long long)a0;
- (void)_setCurrentToolbarViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)_canShowWhileLocked;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)loadView;
- (void)_updateChromelessBarsIsBeforeTransition:(BOOL)a0;
- (void)viewController:(id)a0 willSetupInitialBarsVisibilityOnViewWillAppearAnimated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)prepareForDismissingForced:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)pu_setPreventsAutorotation:(BOOL)a0;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)a0;
- (void)_performAlternateBackKeyCommand:(id)a0;
- (BOOL)_canUseAlternateBackKeyCommandToTriggerSidebarKeyCommandWithSender:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)_setShouldOptOutChromelessBars:(BOOL)a0;
- (BOOL)_canPerformAlternateBackKeyCommandToPopViewController;
- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_extendedToolbar;
- (void)_commonPUNavigationControllerInitialization;

@end

@class OKTransition, NSString, NSArray, NSMapTable, OFPageViewController, NSMutableArray;

@interface OKNavigatorLinearViewController : OKNavigatorViewController <OFPageViewControllerDelegate, OFPageViewControllerDataSource, OKPresentationLiveUpdateSupport, OKNavigatorViewControllerTransitionActionProtocol, OFViewControllerTransitioningDelegate> {
    NSArray *_transitions;
    OKTransition *_currentTransition;
    OFPageViewController *_pagesViewController;
    NSMutableArray *_orderedPagesNames;
    NSMapTable *_registeredActionBindingTransitions;
    NSMapTable *_actionRespondersTransitionContexts;
}

@property (nonatomic) double interactiveTransitionTrackingBoxRadius;
@property (nonatomic) double interactiveTransitionProgressThreshold;
@property (nonatomic) double interactiveTransitionVelocityThreshold;
@property (retain, nonatomic) OKTransition *defaultTransition;
@property (retain, nonatomic) OKTransition *overrideTransition;
@property (nonatomic) long long navigationOrientation;
@property (nonatomic) BOOL wraps;
@property (nonatomic) BOOL panIsEnabled;
@property (nonatomic) BOOL keyboardIsEnabled;
@property (nonatomic) BOOL wantsPageControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (long long)presentationCountForPageViewController:(id)a0;
- (long long)presentationIndexForPageViewController:(id)a0;
- (void)dealloc;
- (void)pageViewController:(id)a0 willStartTransitioningToViewController:(id)a1 fromViewController:(id)a2 withDirection:(long long)a3;
- (void)pageViewController:(id)a0 didStartTransitioningToViewController:(id)a1 fromViewController:(id)a2;
- (void)pageViewController:(id)a0 willFinishTransitioningToViewController:(id)a1 fromViewController:(id)a2 transitionWillComplete:(BOOL)a3;
- (void)pageViewController:(id)a0 didFinishTransitioningToViewController:(id)a1 fromViewController:(id)a2 transitionCompleted:(BOOL)a3;
- (void)pageViewController:(id)a0 willStartBouncingWithDirection:(long long)a1;
- (void)pageViewControllerDidFinishBouncing:(id)a0;
- (BOOL)pageViewController:(id)a0 canAutomaticallyHandleGestureRecognizer:(id)a1;
- (void)pageViewController:(id)a0 didUpdateTransitioningToViewController:(id)a1 fromViewController:(id)a2 withProgress:(double)a3 andVelocity:(double)a4;
- (id)navigationController:(id)a0 animationControllerForDirection:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (BOOL)prepareForWarmup;
- (BOOL)prepareForUnload;
- (void)applySettings;
- (void)registerActionBindingTransition:(id)a0;
- (void)unregisterActionBindingTransition:(id)a0;
- (void)presentationDidLiveUpdate;
- (void)navigateToPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)canPerformAction:(id)a0;
- (void)gotoPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)reloadPagesViewController;
- (void)prepareAdjacentPageViewControllers;
- (void)updatePagesViewController;
- (id)nameForPageBeforePage:(id)a0;
- (id)nameForPageAfterPage:(id)a0;
- (void)setSettingOrientation:(long long)a0;
- (void)goToNext:(id)a0;
- (void)goToPrevious:(id)a0;
- (id)initNavigationWithKey:(id)a0 isKeyUp:(BOOL)a1 andMethod:(SEL)a2;
- (void)navigateToNext:(id)a0;
- (void)navigateToPrevious:(id)a0;
- (void)_navigateToPrevious:(BOOL)a0 withAction:(id)a1 overridingTransition:(BOOL)a2;
- (id)transitionAfterPage:(id)a0;
- (id)transitionBeforePage:(id)a0;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1 createIfNeeded:(BOOL)a2;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1 createIfNeeded:(BOOL)a2;
- (void)setCurrentPageToPageWithName:(id)a0 direction:(long long)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_pageViewControllerForActionResponder:(id)a0;
- (void)setSettingDefaultTransition:(id)a0;
- (void)setSettingOverrideTransition:(id)a0;
- (void)setSettingWraps:(BOOL)a0;
- (void)setSettingKeyboardIsEnabled:(BOOL)a0;
- (void)setSettingPanIsEnabled:(BOOL)a0;
- (void)setSettingWantsPageControl:(BOOL)a0;
- (void)setSettingTransitions:(id)a0;
- (void)setSettingInteractiveTransitionSettings:(id)a0;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 fromViewController:(id)a2 transitionCompleted:(BOOL)a3;

@end

@class UINavigationController, UIViewController;

@interface PUNavigationTransition : PUViewControllerTransition

@property (nonatomic, setter=_setOperation:) long long _operation;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (nonatomic) BOOL wasStatusBarHiddenBeforeTransition;
@property (weak) UIViewController *expectedDestinationOnPop;
@property (readonly, nonatomic) double pushDuration;
@property (readonly, nonatomic) double popDuration;

+ (id)animationControllerForOperation:(long long)a0 fromViewController:(id)a1 toViewController:(id)a2 inNavigationController:(id)a3;
+ (BOOL)shouldCrossFadeBottomBarsForNavigationController:(id)a0;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (id)initWithDuration:(double)a0;
- (double)transitionDuration:(id)a0;
- (void)finishInteractiveTransition;
- (void)imageModulationIntensityDidChange;
- (id)initWithPushDuration:(double)a0 popDuration:(double)a1;
- (void)didCompleteTransitionAnimation;
- (void)transitionWillStartOperation:(long long)a0 animated:(BOOL)a1 interactive:(BOOL)a2;
- (void)completeTransition:(BOOL)a0;
- (void)transitionDidStartOperation:(long long)a0 animated:(BOOL)a1 interactive:(BOOL)a2;
- (void)transitionWillAnimateOperation:(long long)a0 interactive:(BOOL)a1;
- (void)completeInteractiveOperation:(long long)a0 finished:(BOOL)a1;
- (void)cancelInteractiveTransition;

@end

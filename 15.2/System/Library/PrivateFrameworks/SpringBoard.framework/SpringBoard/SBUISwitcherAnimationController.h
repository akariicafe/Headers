@class NSString, SBMainSwitcherViewController;

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver>

@property (weak, nonatomic) SBMainSwitcherViewController *switcherViewController;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (nonatomic, getter=_isInterruptible, setter=_setInterruptible:) BOOL _interruptible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationSettings;
- (void)_didComplete;
- (void)_updatePPTsForAnimationStart;
- (BOOL)isInterruptible;
- (BOOL)shouldResignActiveForAnimation;
- (void)_updatePPTsForAnimationEnd;
- (void).cxx_destruct;
- (void)_addSignpostsForAnimationEnd;
- (id)_previousLayoutState;
- (void)animationControllerDidFinishAnimation:(id)a0;
- (id)initWithWorkspaceTransitionRequest:(id)a0 switcherViewController:(id)a1 childAnimationControllers:(id)a2 animationBlock:(id /* block */)a3;
- (void)_startAnimation;
- (BOOL)isReasonableMomentToInterrupt;
- (id)_layoutState;
- (void)_addSignpostsForAnimationStart;

@end

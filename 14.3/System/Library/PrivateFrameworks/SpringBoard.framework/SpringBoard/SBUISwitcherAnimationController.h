@class NSString, SBMainSwitcherViewController;

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver>

@property (weak, nonatomic) SBMainSwitcherViewController *switcherViewController;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (nonatomic, getter=_isInterruptible, setter=_setInterruptible:) BOOL _interruptible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInterruptible;
- (id)animationSettings;
- (void).cxx_destruct;
- (void)_startAnimation;
- (void)_didComplete;
- (void)_updatePPTsForAnimationStart;
- (void)animationControllerDidFinishAnimation:(id)a0;
- (BOOL)shouldResignActiveForAnimation;
- (id)_layoutState;
- (id)_previousLayoutState;
- (void)_addSignpostsForAnimationEnd;
- (BOOL)isReasonableMomentToInterrupt;
- (void)_updatePPTsForAnimationEnd;
- (id)initWithWorkspaceTransitionRequest:(id)a0 switcherViewController:(id)a1 childAnimationControllers:(id)a2 animationBlock:(id /* block */)a3;
- (void)_addSignpostsForAnimationStart;

@end

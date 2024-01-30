@class NSString;
@protocol SBSwitcherContentViewControlling, NSObject;

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver>

@property (weak, nonatomic) id<SBSwitcherContentViewControlling> contentViewController;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (retain, nonatomic) id<NSObject> activityToken;
@property (nonatomic, getter=_isInterruptible, setter=_setInterruptible:) BOOL _interruptible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updatePPTsForAnimationStart;
- (id)_layoutState;
- (BOOL)isInterruptible;
- (id)_previousLayoutState;
- (void)_startAnimation;
- (void)_didComplete;
- (void)_updatePPTsForAnimationEnd;
- (id)animationSettings;
- (BOOL)isReasonableMomentToInterrupt;
- (id)initWithWorkspaceTransitionRequest:(id)a0 contentViewController:(id)a1 childAnimationControllers:(id)a2 animationBlock:(id /* block */)a3;
- (void)_addSignpostsAndEndAnimationTrackingForAnimationEnd;
- (void)_addSignpostsAndBeginAnimationTrackingForAnimationStart;
- (void)animationControllerDidFinishAnimation:(id)a0;
- (BOOL)shouldResignActiveForAnimation;
- (void).cxx_destruct;

@end

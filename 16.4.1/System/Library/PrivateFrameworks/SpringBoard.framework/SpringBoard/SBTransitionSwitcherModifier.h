@class NSUUID, NSArray;

@interface SBTransitionSwitcherModifier : SBSwitcherModifier {
    BOOL _wantsResignActiveAndAsyncRenderingAssertions;
    BOOL _isTransitioningToSwitcher;
    NSArray *_appLayoutsToEnsureExist;
}

@property (readonly, nonatomic) unsigned long long transitionPhase;
@property (readonly, nonatomic) BOOL asyncRenderingDisabled;
@property (readonly, nonatomic) NSUUID *transitionID;

- (BOOL)requireStripContentsInViewHierarchy;
- (id)keyboardSuppressionMode;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)transitionWillBegin;
- (id)handleRemovalEvent:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)appLayoutsToResignActive;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionDidEnd;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)handleTransitionEvent:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)handleScrollEvent:(id)a0;
- (void).cxx_destruct;
- (id)transitionWillUpdate;
- (BOOL)shouldInterruptForRemovalEvent:(id)a0;
- (void)_setTransitionPhase:(unsigned long long)a0;
- (id)handleGestureEvent:(id)a0;
- (id)initWithTransitionID:(id)a0;
- (BOOL)isPreparingLayout;
- (BOOL)isUpdatingLayout;

@end

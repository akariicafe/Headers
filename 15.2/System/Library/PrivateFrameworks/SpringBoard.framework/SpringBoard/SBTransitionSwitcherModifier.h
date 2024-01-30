@class NSUUID, NSArray;

@interface SBTransitionSwitcherModifier : SBSwitcherModifier {
    BOOL _wantsResignActiveAndAsyncRenderingAssertions;
    BOOL _isTransitioningToSwitcher;
    NSArray *_appLayoutsToEnsureExist;
}

@property (readonly, nonatomic) unsigned long long transitionPhase;
@property (readonly, nonatomic) NSUUID *transitionID;

- (id)appLayoutsToResignActive;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)a0;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)keyboardSuppressionMode;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (id)handleRemovalEvent:(id)a0;
- (id)transitionWillUpdate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (id)transitionWillBegin;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (id)handleScrollEvent:(id)a0;
- (id)initWithTransitionID:(id)a0;
- (BOOL)isPreparingLayout;
- (BOOL)isUpdatingLayout;
- (id)handleGestureEvent:(id)a0;
- (BOOL)shouldInterruptForRemovalEvent:(id)a0;
- (void)_setTransitionPhase:(unsigned long long)a0;

@end

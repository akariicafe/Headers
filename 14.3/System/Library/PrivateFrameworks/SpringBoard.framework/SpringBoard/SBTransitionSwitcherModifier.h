@class NSUUID, NSArray;

@interface SBTransitionSwitcherModifier : SBSwitcherModifier {
    BOOL _wantsResignActiveAndAsyncRenderingAssertions;
    BOOL _isTransitioningToSwitcher;
    NSArray *_appLayoutsToEnsureExist;
}

@property (readonly, nonatomic) unsigned long long transitionPhase;
@property (readonly, nonatomic) NSUUID *transitionID;

- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (id)handleMainTransitionEvent:(id)a0;
- (id)transitionWillUpdate;
- (id)handleScrollEvent:(id)a0;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double *)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)appLayoutsToResignActive;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillBegin;
- (id)transitionDidEnd;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)a0;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)keyboardSuppressionMode;
- (id)handleRemovalEvent:(id)a0;
- (id)initWithTransitionID:(id)a0;
- (BOOL)isPreparingLayout;
- (BOOL)isUpdatingLayout;
- (long long)transitionLiveContentRasterizationStyle;
- (id)_handleTransitionEvent:(id)a0;
- (id)handleInlineTransitionEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (void)_setTransitionPhase:(unsigned long long)a0;

@end

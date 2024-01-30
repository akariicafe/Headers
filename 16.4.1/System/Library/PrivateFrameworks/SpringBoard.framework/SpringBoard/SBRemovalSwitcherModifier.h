@class SBSwitcherModifier, NSSet, SBAppLayout;

@interface SBRemovalSwitcherModifier : SBSwitcherModifier {
    long long _layoutRole;
    SBAppLayout *_appLayout;
    long long _reason;
    SBSwitcherModifier *_multitaskingModifier;
    BOOL _hasResizedEnoughToUnblur;
    unsigned long long _indexToScrollToAfterRemoval;
    unsigned long long _indexOfAppLayoutPriorToRemoval;
    NSSet *_visibleAppLayoutsPriorToRemoval;
    SBAppLayout *_resultingAppLayoutIfAny;
    unsigned long long _phase;
}

- (BOOL)shouldScaleContentToFillBoundsAtIndex:(unsigned long long)a0;
- (id)handleRemovalEvent:(id)a0;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)topMostLayoutElements;
- (BOOL)shouldAccessoryDrawShadowForAppLayout:(id)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (id)resizeProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)blurViewIconScaleForIndex:(unsigned long long)a0;
- (id)visibleAppLayouts;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(id /* block */)a0;
- (id)_remainingAppLayoutForRemovingLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleInsertionEvent:(id)a0;
- (id)handleResizeProgressEvent:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithLayoutRole:(long long)a0 inAppLayout:(id)a1 reason:(long long)a2;

@end

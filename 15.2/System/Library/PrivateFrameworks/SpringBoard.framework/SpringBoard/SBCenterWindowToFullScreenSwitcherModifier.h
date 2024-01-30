@class SBDisplayItem, SBAppLayout;

@interface SBCenterWindowToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fullScreenAppLayoutWithCenterRemoved;
    SBDisplayItem *_movingCenterItem;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fullScreenWithCenterAppLayout:(id)a1;

@end

@class SBAppLayout;

@interface SBCenterWindowToNewSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromFullScreenAppLayout;
    SBAppLayout *_toSpaceAppLayout;
    long long _layoutRoleBeingAdded;
}

- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (BOOL)_wasItemPreviouslyCenter:(id)a0;
- (BOOL)_wasItemPreviouslyFullScreen:(id)a0;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromFullScreenAppLayout:(id)a1 toSpaceAppLayout:(id)a2;

@end

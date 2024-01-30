@class SBAppLayout;

@interface SBCenterWindowToNewSplitViewSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromFullScreenAppLayout;
    SBAppLayout *_toSpaceAppLayout;
    long long _layoutRoleBeingAdded;
}

- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 fromFullScreenAppLayout:(id)a1 toSpaceAppLayout:(id)a2;
- (BOOL)_wasItemPreviouslyFullScreen:(id)a0;
- (BOOL)_wasItemPreviouslyCenter:(id)a0;

@end

@class SBAppLayout;

@interface SBItemResizeTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
}

- (id)keyboardSuppressionMode;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;
- (BOOL)wantsSceneResizesHostedContextForAppLayout:(id)a0;
- (id)initWithTransitionID:(id)a0 selectedAppLayout:(id)a1;

@end

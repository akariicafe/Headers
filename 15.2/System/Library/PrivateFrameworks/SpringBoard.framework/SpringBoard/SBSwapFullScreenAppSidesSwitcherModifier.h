@class SBAppLayout;

@interface SBSwapFullScreenAppSidesSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    long long _layoutRoleToKeepOnTop;
    long long _animationPhase;
}

- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (id)transitionWillBegin;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 layoutRoleToKeepOnTop:(long long)a3;

@end

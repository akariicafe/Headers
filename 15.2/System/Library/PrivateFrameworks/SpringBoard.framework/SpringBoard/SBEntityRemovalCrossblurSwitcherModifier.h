@class NSUUID, SBSwitcherModifier, SBAppLayout, SBEntityRemovalToHomeSwitcherModifier;

@interface SBEntityRemovalCrossblurSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _animateOpacity;
    NSUUID *_transitionID;
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    SBEntityRemovalToHomeSwitcherModifier *_toHomeRemovalModifier;
}

- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)transitionWillUpdate;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 multitaskingModifier:(id)a2;

@end

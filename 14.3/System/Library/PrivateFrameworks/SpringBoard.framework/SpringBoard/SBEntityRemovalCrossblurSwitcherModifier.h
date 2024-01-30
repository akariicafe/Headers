@class NSUUID, SBSwitcherModifier, SBAppLayout, SBEntityRemovalToHomeSwitcherModifier;

@interface SBEntityRemovalCrossblurSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _animateOpacity;
    NSUUID *_transitionID;
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    SBEntityRemovalToHomeSwitcherModifier *_toHomeRemovalModifier;
}

- (id)visibleAppLayouts;
- (double)opacityForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (id)transitionDidEnd;
- (double)scaleForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 multitaskingModifier:(id)a2;

@end

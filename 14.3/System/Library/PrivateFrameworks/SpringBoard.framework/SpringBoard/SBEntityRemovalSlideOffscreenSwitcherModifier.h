@class NSUUID, SBSwitcherModifier, SBAppLayout, SBEntityRemovalToHomeSwitcherModifier, SBEntityRemovalDosidoSlideOutAnimationSettings;

@interface SBEntityRemovalSlideOffscreenSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _isSecondStage;
    NSUUID *_transitionID;
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    unsigned long long _direction;
    SBEntityRemovalToHomeSwitcherModifier *_toHomeRemovalModifier;
    SBEntityRemovalDosidoSlideOutAnimationSettings *_animationSettings;
}

- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)transitionWillUpdate;
- (void).cxx_destruct;
- (id)handleTimerEvent:(id)a0;
- (id)_layoutSettings;
- (double)scaleForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 direction:(unsigned long long)a2 animationSettings:(id)a3 multitaskingModifier:(id)a4;

@end

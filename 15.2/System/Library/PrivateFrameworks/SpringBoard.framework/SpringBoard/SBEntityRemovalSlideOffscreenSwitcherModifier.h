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

- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)transitionWillUpdate;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)_layoutSettings;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 direction:(unsigned long long)a2 animationSettings:(id)a3 multitaskingModifier:(id)a4;

@end

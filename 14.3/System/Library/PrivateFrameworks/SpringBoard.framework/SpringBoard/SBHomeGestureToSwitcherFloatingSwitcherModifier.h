@class SBAppLayout, SBFluidSwitcherAnimationSettings, SBSwitcherModifier;

@interface SBHomeGestureToSwitcherFloatingSwitcherModifier : SBTransitionSwitcherModifier

@property (retain, nonatomic) SBSwitcherModifier *multitaskingModifier;
@property (retain, nonatomic) SBAppLayout *selectedAppLayout;
@property (retain, nonatomic) SBFluidSwitcherAnimationSettings *animationSettings;

- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)liveContentRasterizationAttributesForAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)a0 multitaskingModifier:(id)a1 selectedAppLayout:(id)a2;

@end

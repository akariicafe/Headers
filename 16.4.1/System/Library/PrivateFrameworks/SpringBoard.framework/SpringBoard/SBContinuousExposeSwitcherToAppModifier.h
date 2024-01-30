@interface SBContinuousExposeSwitcherToAppModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) long long direction;

- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (id)_layoutSettings;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1;

@end

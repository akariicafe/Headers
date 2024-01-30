@class SBSwitcherModifier, SBContinuousExposePeekTransitionModifier, SBAppLayout;

@interface SBContinuousExposePeekSwitcherModifier : SBSwitcherModifier {
    SBSwitcherModifier *_contentModifier;
    SBContinuousExposePeekTransitionModifier *_dismissalTransitionModifier;
}

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long configuration;

- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (unsigned long long)transactionCompletionOptions;
- (BOOL)isSwitcherWindowVisible;
- (id)handleEvent:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (id)handleScrollEvent:(id)a0;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (id)debugPotentialChildModifiers;
- (id)initWithAppLayout:(id)a0 configuration:(long long)a1;

@end

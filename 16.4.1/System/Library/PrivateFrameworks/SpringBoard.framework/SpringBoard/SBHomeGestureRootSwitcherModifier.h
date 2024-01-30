@class SBSwitcherModifier;

@interface SBHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
}

@property (nonatomic) BOOL resignsTransitionIntoAppSwitcher;
@property (nonatomic) BOOL ensuresSelectedAppLayoutUsesAnchorPointSpacePinning;

- (id)_newMultitaskingModifier;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)gestureType;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)initWithStartingEnvironmentMode:(long long)a0 multitaskingModifier:(id)a1;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;

@end

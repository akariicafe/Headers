@class SBSwitcherModifier, SBAppLayout;

@interface SBGestureRootSwitcherModifier : SBSwitcherModifier {
    SBSwitcherModifier *_transitionModifierBeforeHandlingEvent;
    SBSwitcherModifier *_gestureModifierBeforeHandlingEvent;
}

@property (readonly, nonatomic) SBAppLayout *selectedAppLayout;
@property (readonly, nonatomic) long long currentEnvironmentMode;

- (id)handleMainTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (id)handleEvent:(id)a0;
- (id)handleRemovalEvent:(id)a0;
- (long long)gestureType;
- (id)handleGestureEvent:(id)a0;
- (id)_transitionModifier;
- (id)_gestureModifier;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (id)initWithStartingEnvironmentMode:(long long)a0;
- (BOOL)completesWhenChildrenComplete;

@end

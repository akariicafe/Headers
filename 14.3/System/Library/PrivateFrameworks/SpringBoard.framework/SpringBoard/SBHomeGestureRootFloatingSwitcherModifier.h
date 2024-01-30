@class SBSwitcherModifier;

@interface SBHomeGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
}

- (void).cxx_destruct;
- (long long)gestureType;
- (id)transitionChildModifierForMainTransitionEvent:(id)a0 activeGestureModifier:(id)a1;
- (id)gestureChildModifierForGestureEvent:(id)a0 activeTransitionModifier:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameWithScaleAppliedForIndex:(unsigned long long)a0;
- (id)initWithMultitaskingModifier:(id)a0;

@end

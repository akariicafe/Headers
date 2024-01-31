@interface SBMoveGestureFloatingSwitcherModifierAccessibility : __SBMoveGestureFloatingSwitcherModifierAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)_updateForGestureDidBeginWithEvent:(id)a0;
- (id)_updateForGestureDidChangeWithEvent:(id)a0;
- (id)_updateForGestureDidEndWithEvent:(id)a0;
- (long long)_axInitialFloatingConfiguration;
- (long long)_axFloatingConfigurationForGestureEvent:(id)a0 withZeroVelocity:(BOOL)a1;
- (long long)_axGetCurrentFloatingConfiguration;
- (long long)_axGetFinishedFloatingConfiguration;
- (void)_axSetCurrentFloatingConfiguration:(long long)a0;
- (void)_axSetFinishedFloatingConfiguration:(long long)a0;

@end

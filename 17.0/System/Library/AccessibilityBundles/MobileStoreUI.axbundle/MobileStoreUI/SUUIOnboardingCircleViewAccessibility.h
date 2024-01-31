@interface SUUIOnboardingCircleViewAccessibility : __SUUIOnboardingCircleViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)_accessibilityScrollToVisible;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (void)_accessibilityActivateCircle;
- (id)_accessibilityPhysicalCirclesViewSuperview;
- (BOOL)_accessibilityRemoveCircle;

@end

@interface SKUIOnboardingCircleViewAccessibility : __SKUIOnboardingCircleViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)_accessibilityScrollToVisible;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityPath;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (BOOL)_accessibilityRemoveCircle;
- (id)_accessibilityPhysicalCirclesViewSuperview;
- (void)_accessibilityActivateCircle;

@end

@interface SKUIOnboardingCircleViewAccessibility : __SKUIOnboardingCircleViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
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

@interface AVMobileChromelessFluidSliderAccessibility : __AVMobileChromelessFluidSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_accessibilityBumpValue:(BOOL)a0;
- (void)_accessibilityAnnounceNewValue;

@end

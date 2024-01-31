@interface MKPitchControlAccessibility : __MKPitchControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (double)_accessibilityMinValue;
- (double)_accessibilityMaxValue;
- (double)_accessibilityNumberValue;
- (long long)_accessibilityOrientation;
- (void)_accessibilityBumpValue:(BOOL)a0;

@end

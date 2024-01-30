@interface UIPanelBorderViewAccessibility : __UIPanelBorderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)_accessibilityRoleDescription;
- (double)_accessibilityMinValue;
- (double)_accessibilityMaxValue;
- (double)_accessibilityNumberValue;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityValue:(id)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (void)_accessibilitySetValue:(id)a0;
- (long long)_accessibilityOrientation;
- (id)_accessibilityUIViewAccessibilityFrame;

@end

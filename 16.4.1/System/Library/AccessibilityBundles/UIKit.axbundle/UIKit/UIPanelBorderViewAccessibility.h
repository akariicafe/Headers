@interface UIPanelBorderViewAccessibility : __UIPanelBorderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)a0;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (id)_accessibilityRoleDescription;
- (double)_accessibilityNumberValue;
- (void)_accessibilitySetValue:(id)a0;
- (long long)_accessibilityOrientation;
- (id)_accessibilityUIViewAccessibilityFrame;

@end

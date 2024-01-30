@interface UIPanelBorderViewAccessibility : __UIPanelBorderViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (double)_accessibilityMinValue;
- (double)_accessibilityMaxValue;
- (id)_accessibilityRoleDescription;
- (double)_accessibilityNumberValue;
- (id)_accessibilityUIViewAccessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilitySetValue:(id)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)setAccessibilityValue:(id)a0;
- (id)accessibilityValue;
- (long long)_accessibilityOrientation;
- (void)_accessibilitySetBorderFloatValue:(double)a0;
- (double)_accessibilityColumnWidth;
- (double)_accessibilitySplitViewControllerWidth;
- (double)_accessibilityMinimumColumnWidth;
- (double)_accessibilityMaximumColumnWidth;
- (BOOL)_axIsPrimaryBorder;
- (id)_axSplitViewControllerImplementation;
- (void)_axSetSplitViewControllerImplementation:(id)a0;
- (void)_axSetIsPrimaryBorder:(BOOL)a0;

@end

@interface CalculatorKeypadButtonAccessibility : __CalculatorKeypadButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityPath;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
- (id)_axKeypadLabelAttributedText;
- (long long)accessibilityCalculatorButton;

@end

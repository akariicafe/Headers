@interface _UIDatePickerContainerViewAccessibility : ___UIDatePickerContainerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityViewIsModal;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityDismissElement;
- (id)_axDatePicker:(id)a0;
- (void)_setAccessibilityDismissElement:(id)a0;

@end

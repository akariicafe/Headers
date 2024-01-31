@interface EKEventDateEditItemAccessibility : __EKEventDateEditItemAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_datePickerChanged:(id)a0;
- (void)_showInlineControls:(long long)a0 forSubitem:(long long)a1 includingInlineDatePicker:(BOOL)a2;
- (void)editor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (void)_accessibilitySetupDateCellForKey:(id)a0;
- (void)_axUpdateEndDateCellLabel;

@end

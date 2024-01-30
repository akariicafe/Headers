@interface UIStepperAccessibility : __UIStepperAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (unsigned long long)_accessibilityAutomationType;
- (void)_updateCount:(id)a0;
- (id)_accessibilityKeyCommands;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_refreshVisualElement;
- (void)_commonStepperInit;
- (id)_axGetDecrementLabel;
- (id)_axGetIncrementLabel;
- (id)_axMacIdiomIncrementElement;
- (id)_axMacIdiomDecrementElement;
- (void)_axSetMacIdiomIncrementElement:(id)a0;
- (void)_axSetMacIdiomDecrementElement:(id)a0;
- (BOOL)_axIsAccessibilityNumericalPicker;
- (void)_axAnnotateButtons;
- (void)_fkaTapPlus;
- (void)_fkaTapMinus;
- (id)_accessibilityPlusButton;
- (id)_accessibilityMinusButton;
- (void)_axSetIncrementLabel:(id)a0;
- (void)_axSetDecrementLabel:(id)a0;

@end

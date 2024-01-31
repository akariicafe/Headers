@interface UIStepperAccessibility : __UIStepperAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)canBecomeFocused;
- (void)_commonStepperInit;
- (void)_refreshVisualElement;
- (void)_updateCount:(id)a0;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityIsMacVisualAppearance;
- (id)_accessibilityKeyCommands;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityKeyCommandActionMinus;
- (void)_accessibilityKeyCommandActionPlus;

@end

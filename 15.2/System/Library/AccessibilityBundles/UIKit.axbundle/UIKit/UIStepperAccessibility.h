@interface UIStepperAccessibility : __UIStepperAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (unsigned long long)_accessibilityAutomationType;
- (void)_refreshVisualElement;
- (void)_updateCount:(id)a0;
- (void)_commonStepperInit;
- (id)_accessibilityKeyCommands;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityKeyCommandActionPlus;
- (void)_accessibilityKeyCommandActionMinus;

@end

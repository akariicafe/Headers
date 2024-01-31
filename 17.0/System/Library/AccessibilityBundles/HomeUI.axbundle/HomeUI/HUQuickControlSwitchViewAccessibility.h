@interface HUQuickControlSwitchViewAccessibility : __HUQuickControlSwitchViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityControlName;
- (void)_accessibilitySetSwitchValue:(double)a0;
- (id)_accessibilitySingleControlHostViewController;
- (id)_accessibilityControlItem;
- (id)_accessibilityStateForPrimaryCharacteristic;
- (double)_accessibilitySwitchValue;

@end

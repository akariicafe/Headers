@interface _UIDatePickerCalendarHeaderViewAccessibility : ___UIDatePickerCalendarHeaderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupViewHierarchy;
- (id)accessibilityLabel;
- (BOOL)_accessibilityUpdatesSwitchMenu;
- (BOOL)_accessibilityFKAShouldProcessChildren;
- (void)_accessibilityLoadAccessibilityInformation;

@end

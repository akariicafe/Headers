@interface _UIDatePickerCalendarHeaderViewAccessibility : ___UIDatePickerCalendarHeaderViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityFKAShouldProcessChildren;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)_setupViewHierarchy;
- (id)_accessibilityUserTestingChildren;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)_accessibilityUpdatesSwitchMenu;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)_axMarkupMonthSelector;

@end

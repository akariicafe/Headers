@interface _UICalendarHeaderViewAccessibility : ___UICalendarHeaderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)_setupViewHierarchy;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (BOOL)_accessibilityUpdatesSwitchMenu;
- (BOOL)_accessibilityFKAShouldProcessChildren;
- (void)_accessibilityLoadAccessibilityInformation;

@end

@interface _UICalendarHeaderViewAccessibility : ___UICalendarHeaderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)accessibilityIncrement;
- (id)_accessibilityUserTestingChildren;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)_setupViewHierarchy;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (BOOL)_accessibilityUpdatesSwitchMenu;
- (BOOL)_accessibilityFKAShouldProcessChildren;
- (void)_accessibilityLoadAccessibilityInformation;

@end

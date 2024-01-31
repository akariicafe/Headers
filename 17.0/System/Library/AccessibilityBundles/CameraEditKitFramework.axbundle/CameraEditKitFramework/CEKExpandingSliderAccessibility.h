@interface CEKExpandingSliderAccessibility : __CEKExpandingSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (long long)_accessibilityExpandedStatus;
- (void)_handleExpansionAnimationTimerFired:(id)a0;
- (double)_axMinimumValue;
- (double)_axMaximumValue;
- (void)_axChangeValueInDirection:(long long)a0 withLargeStep:(BOOL)a1;
- (double)_axCurrentSliderValue;
- (BOOL)_axIsSliderExpanded;
- (id)_axSemanticStyle;

@end

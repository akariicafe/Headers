@interface CAMSemanticStyleSliderAccessibility : __CAMSemanticStyleSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (long long)_accessibilityExpandedStatus;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)accessibilityActivate;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)_handleExpansionAnimationTimerFired:(id)a0;
- (id)_axSemanticStyle;
- (BOOL)_axIsSliderExpanded;
- (void)_axChangeValueInDirection:(long long)a0 withLargeStep:(BOOL)a1;
- (double)_axCurrentSliderValue;
- (double)_axMaximumValue;
- (double)_axMinimumValue;

@end

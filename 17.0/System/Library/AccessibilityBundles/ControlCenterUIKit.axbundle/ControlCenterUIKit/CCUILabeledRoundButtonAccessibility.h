@interface CCUILabeledRoundButtonAccessibility : __CCUILabeledRoundButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_axLabelsVisible;

@end

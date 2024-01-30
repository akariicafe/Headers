@interface SKUIStarRatingControlAccessibility : __SKUIStarRatingControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (void)_axSetRating:(long long)a0;

@end

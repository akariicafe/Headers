@interface SKStarRatingControlAccessibility : __SKStarRatingControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;

@end

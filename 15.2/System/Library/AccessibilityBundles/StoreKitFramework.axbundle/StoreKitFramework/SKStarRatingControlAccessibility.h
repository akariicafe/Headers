@interface SKStarRatingControlAccessibility : __SKStarRatingControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;

@end

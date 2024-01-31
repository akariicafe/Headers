@interface MTAWorldClockViewAccessibility : __MTAWorldClockViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityElementShouldBeInvalid;
- (id)_accessibilityFuzzyHitTestElements;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_axDeleteClock;

@end

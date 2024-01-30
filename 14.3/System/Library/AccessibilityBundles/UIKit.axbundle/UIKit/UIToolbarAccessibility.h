@interface UIToolbarAccessibility : __UIToolbarAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (long long)accessibilityContainerType;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;
- (id)accessibilityIdentifier;

@end

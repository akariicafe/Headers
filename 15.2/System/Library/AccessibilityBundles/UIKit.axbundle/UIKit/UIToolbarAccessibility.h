@interface UIToolbarAccessibility : __UIToolbarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityIdentifier;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (void)_accessibilityLoadAccessibilityInformation;

@end

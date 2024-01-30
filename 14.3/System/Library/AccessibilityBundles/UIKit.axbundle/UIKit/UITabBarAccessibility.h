@interface UITabBarAccessibility : __UITabBarAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)_accessibilityAutomationType;
- (long long)accessibilityContainerType;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;
- (void)_dismissCustomizeSheet:(BOOL)a0;
- (void)beginCustomizingItems:(id)a0;

@end

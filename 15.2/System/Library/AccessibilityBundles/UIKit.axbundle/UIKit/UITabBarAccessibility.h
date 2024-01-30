@interface UITabBarAccessibility : __UITabBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (void)_dismissCustomizeSheet:(BOOL)a0;
- (void)beginCustomizingItems:(id)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityFuzzyHitTestElements;
- (void)_accessibilityLoadAccessibilityInformation;

@end

@interface UITabBarAccessibility : __UITabBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (void)_dismissCustomizeSheet:(BOOL)a0;
- (void)beginCustomizingItems:(id)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityFuzzyHitTestElements;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;

@end

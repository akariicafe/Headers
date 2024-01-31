@interface PHBottomBarAccessibility : __PHBottomBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setAnimating:(BOOL)a0;
- (void)layoutSubviews;
- (void)buttonPressed:(id)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (void)refreshCustomizedActionTypeTitles;
- (void)setCurrentState:(long long)a0 animated:(BOOL)a1 animationCompletionBlock:(id /* block */)a2;

@end

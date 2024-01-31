@interface STUIStatusBarAccessibility : __STUIStatusBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_prepareVisualProviderIfNeeded;
- (id)accessibilityElements;
- (void)_updateDisplayedItemsWithData:(id)a0 styleAttributes:(id)a1 extraAnimations:(id)a2;
- (BOOL)_accessibilityEnumerateSiblingsWithParent:(id *)a0 options:(id)a1 usingBlock:(id /* block */)a2;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (BOOL)_axElementWithinFocused;
- (void)_axSetIsHitTesting:(BOOL)a0;

@end

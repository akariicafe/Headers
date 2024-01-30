@interface _UIStatusBarAccessibility : ___UIStatusBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_updateDisplayedItemsWithData:(id)a0 styleAttributes:(id)a1 extraAnimations:(id)a2;
- (void)_prepareVisualProviderIfNeeded;
- (id)accessibilityElements;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityEnumerateSiblingsWithParent:(id *)a0 options:(id)a1 usingBlock:(id /* block */)a2;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axSetIsHitTesting:(BOOL)a0;
- (BOOL)_axElementWithinFocused;

@end

@interface SBIconListViewAccessibility : __SBIconListViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (id)accessibilityDropPointDescriptors;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityScannerGroupElements;
- (double)_accessibilityMaxFuzzyHitTestDistance;
- (id)_accessibilityEmptyListDropString;
- (BOOL)_accessibilityIsListViewEmptyForDragAndDrop;
- (BOOL)_accessibilityProvidesScannerGroupElements;

@end

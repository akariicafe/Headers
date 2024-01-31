@interface CSLUIFieldOfIconsViewAccessibility : __CSLUIFieldOfIconsViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)beginDraggingView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 node:(id)a2;
- (void)_accessibilityUpdateAppLabels;
- (void)dragToPoint:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)loadIconViews;

@end

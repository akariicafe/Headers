@interface PKPaletteHostViewAccessibility : __PKPaletteHostViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)accessibilityElementsHidden;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_dockPaletteToPosition:(long long)a0 animated:(BOOL)a1;
- (id)_axToolPaletteLocationAtCorner:(unsigned long long)a0;
- (id)_axToolPaletteLocationAlongEdge:(long long)a0;

@end

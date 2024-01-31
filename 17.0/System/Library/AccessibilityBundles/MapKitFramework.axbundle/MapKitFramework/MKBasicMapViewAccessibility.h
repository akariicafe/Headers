@interface MKBasicMapViewAccessibility : __MKBasicMapViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityElements;
- (id)accessibilityCustomActions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andGlobe:(BOOL)a1 shouldRasterize:(BOOL)a2 allowsAntialiasing:(BOOL)a3;
- (id)accessibilityCustomRotors;
- (BOOL)_accessibilityAutomationHitTestReverseOrder;
- (void)_accessibilityLoadAccessibilityInformation;

@end

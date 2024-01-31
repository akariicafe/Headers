@interface MKAnnotationContainerViewAccessibility : __MKAnnotationContainerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (void)deselectAnnotationView:(id)a0 animated:(BOOL)a1;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityAnnotationViews;
- (id)_accessibilityFilterVisibleElements:(id)a0;
- (BOOL)_accessibilityZoom:(BOOL)a0 point:(struct CGPoint { double x0; double x1; })a1;

@end

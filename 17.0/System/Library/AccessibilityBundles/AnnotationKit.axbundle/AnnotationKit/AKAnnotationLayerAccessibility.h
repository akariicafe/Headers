@interface AKAnnotationLayerAccessibility : __AKAnnotationLayerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (BOOL)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilityZoomIn:(BOOL)a0;
- (BOOL)_accessibilityExpandAnnotation;
- (BOOL)_accessibilityShrinkAnnotation;
- (void)_accessibilityMakeAnnotation:(id)a0 larger:(BOOL)a1;

@end

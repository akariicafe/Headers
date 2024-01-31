@interface AVPlayerLayerViewAccessibility : __AVPlayerLayerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_axZoomableView;
- (BOOL)_axCanZoomIn;
- (BOOL)_axCanZoomOut;
- (BOOL)_axHasVideo;
- (BOOL)_axIsZoomable;

@end

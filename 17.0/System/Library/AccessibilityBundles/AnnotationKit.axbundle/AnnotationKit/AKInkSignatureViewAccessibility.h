@interface AKInkSignatureViewAccessibility : __AKInkSignatureViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)canvasViewDrawingDidChange:(id)a0;
- (id)_axDirectTouchTimer;
- (void)_axStopDirectTouch;
- (void)_setAXDirectTouchTimer:(id)a0;
- (void)canvasViewDidStartNewStroke:(id)a0;

@end

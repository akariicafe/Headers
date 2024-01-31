@interface AKSignatureViewAccessibility : __AKSignatureViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)_axDirectTouchTimer;
- (void)_axStopDirectTouch;
- (void)_setAXDirectTouchTimer:(id)a0;

@end

@class UIColor, UIImpactFeedbackGenerator;

@interface CIDVRGBCameraShutterView : UIView {
    double _borderWidth;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    UIImpactFeedbackGenerator *_shutterHapticFeedbackGenerator;
}

@property (nonatomic) BOOL pressed;
@property (copy, nonatomic) id /* block */ onShutterPress;

- (id)accessibilityLabel;
- (void)_startAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)_stopAnimation;
- (void)_drawArcInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawConcentricCirclesIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupGestureRecognizer;
- (void)_setupHapticFeedback;
- (void)_triggerPressEvent:(id)a0;
- (void)_triggerShutterHaptics;

@end

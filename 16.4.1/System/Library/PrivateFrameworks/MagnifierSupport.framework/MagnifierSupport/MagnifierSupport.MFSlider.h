@interface MagnifierSupport.MFSlider : UISlider {
    void /* unknown type, empty encoding */ tickValue;
    void /* unknown type, empty encoding */ tickHeight;
    void /* unknown type, empty encoding */ lastTickRect;
    void /* unknown type, empty encoding */ trackColor;
    void /* unknown type, empty encoding */ maxOffsetFromThumbRect;
    void /* unknown type, empty encoding */ extraTouchInset;
    void /* unknown type, empty encoding */ tickFeedbackGenerator;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end

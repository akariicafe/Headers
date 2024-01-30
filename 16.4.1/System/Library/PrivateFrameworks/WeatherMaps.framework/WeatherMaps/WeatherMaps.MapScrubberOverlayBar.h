@interface WeatherMaps.MapScrubberOverlayBar : UIControl {
    void /* unknown type, empty encoding */ bar;
    void /* unknown type, empty encoding */ elapsedBar;
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ tickMarks;
    void /* unknown type, empty encoding */ nowTickMark;
    void /* unknown type, empty encoding */ barHeight;
    void /* unknown type, empty encoding */ tickWidth;
    void /* unknown type, empty encoding */ baselineSpacing;
    void /* unknown type, empty encoding */ minimumWidth;
    void /* unknown type, empty encoding */ verticalHitAreaIncrease;
    void /* unknown type, empty encoding */ extraPadding;
    void /* unknown type, empty encoding */ overlappingLabelInsets;
    void /* unknown type, empty encoding */ nowLabel;
    void /* unknown type, empty encoding */ todayLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gestureRecognizer;
    void /* unknown type, empty encoding */ accessibilityDateFormatter;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ current;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;

- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)handleWithGesture:(id)a0;

@end

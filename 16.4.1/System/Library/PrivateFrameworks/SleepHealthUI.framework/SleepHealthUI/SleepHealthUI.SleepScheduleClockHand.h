@interface SleepHealthUI.SleepScheduleClockHand : UIControl {
    void /* unknown type, empty encoding */ background;
    void /* unknown type, empty encoding */ symbol;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic) BOOL highlighted;

- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)accessibilityHandIsBedtime;

@end

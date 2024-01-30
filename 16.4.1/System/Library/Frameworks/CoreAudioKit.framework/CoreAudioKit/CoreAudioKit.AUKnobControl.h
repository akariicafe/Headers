@interface CoreAudioKit.AUKnobControl : UIControl {
    void /* unknown type, empty encoding */ param;
    void /* unknown type, empty encoding */ min;
    void /* unknown type, empty encoding */ max;
    void /* unknown type, empty encoding */ previousTouchPosition;
    void /* unknown type, empty encoding */ numDigits;
    void /* unknown type, empty encoding */ formatter;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ valueLayer;
    void /* unknown type, empty encoding */ lineLayer;
    void /* unknown type, empty encoding */ titleLayer;
    void /* unknown type, empty encoding */ valueLabel;
    void /* unknown type, empty encoding */ minValueLayer;
    void /* unknown type, empty encoding */ maxValueLayer;
}

@property (nonatomic) void /* unknown type, empty encoding */ value;
@property (nonatomic) unsigned long long accessibilityTraits;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)tintColorDidChange;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)configureWith:(id)a0;

@end

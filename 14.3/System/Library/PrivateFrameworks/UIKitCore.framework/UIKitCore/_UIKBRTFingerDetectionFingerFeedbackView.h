@class UILabel, _UIKBRTFingerDetectionFingerCircleView;

@interface _UIKBRTFingerDetectionFingerFeedbackView : UIView {
    struct CGPoint { double x; double y; } _framelocation;
    double _radiusInt;
}

@property (retain, nonatomic) UILabel *fingerLabel;
@property (retain, nonatomic) _UIKBRTFingerDetectionFingerCircleView *fingerDot;
@property (nonatomic) BOOL unknownSeen;

- (double)radius;
- (void).cxx_destruct;
- (void)centerOn:(struct CGPoint { double x0; double x1; })a0 withRadius:(double)a1 andIdentifier:(unsigned long long)a2;
- (void)setNeedsDisplay;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

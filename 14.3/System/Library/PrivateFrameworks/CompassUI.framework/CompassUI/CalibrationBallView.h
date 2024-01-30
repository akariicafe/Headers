@class UIView;

@interface CalibrationBallView : UIView {
    UIView *_ballView;
}

@property (nonatomic) double trackRadius;
@property (nonatomic) double ballRadius;
@property (nonatomic, setter=setAngle:) double currentAngle;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)ballView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ballRadius:(double)a1;

@end

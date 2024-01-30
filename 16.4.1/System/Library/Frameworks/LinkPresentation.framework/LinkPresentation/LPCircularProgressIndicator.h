@class CAShapeLayer;

@interface LPCircularProgressIndicator : UIView

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;

- (void)setProgress:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

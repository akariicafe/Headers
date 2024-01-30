@class CAShapeLayer, UIView;

@interface HUQuickControlRingSliderHandleView : UIView

@property (nonatomic) unsigned long long handleViewStyle;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) CAShapeLayer *circleLayer;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (void)_setColor:(id)a0;
- (void).cxx_destruct;
- (double)outerRadius;
- (void)_updateCircleLayer;

@end

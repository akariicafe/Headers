@class CAShapeLayer, UIView;

@interface HUQuickControlRingSliderHandleView : UIView

@property (nonatomic) unsigned long long handleViewStyle;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) CAShapeLayer *circleLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setColor:(id)a0;
- (void)_updateCircleLayer;
- (double)outerRadius;

@end

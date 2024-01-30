@class CAShapeLayer;

@interface CAMDirectionalIndicator : UIControl

@property (readonly, nonatomic) CAShapeLayer *_arrowLayer;
@property (nonatomic) long long direction;

+ (struct CGSize { double x0; double x1; })_circleSize;
+ (id)_createCircleImage;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setDirection:(long long)a0 animated:(BOOL)a1;
- (void)_updateArrowColorAnimated:(BOOL)a0;
- (void)_updateArrowLineWidth;
- (void)_updateArrowShapeAnimated:(BOOL)a0;

@end

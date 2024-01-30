@class UIImageView, CAShapeLayer, CALayer, NSDictionary;

@interface CAMLivePhotoBloomView : UIView

@property (readonly, nonatomic) UIImageView *_defaultImageView;
@property (readonly, nonatomic) CALayer *_ringContainer;
@property (readonly, nonatomic) CAShapeLayer *_outerRing;
@property (readonly, nonatomic) CAShapeLayer *_middleRing;
@property (readonly, nonatomic) CALayer *_innerRing;
@property (readonly, nonatomic) CALayer *_centerRing;
@property (readonly, nonatomic) NSDictionary *_layersByRing;
@property (readonly, nonatomic) NSDictionary *_shapeLayersByRing;
@property (nonatomic) BOOL isOff;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateDefaultImage;
- (void)stopAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)animateBloom;
- (double)_diameterForRing:(long long)a0;
- (double)_strokeWidthForRing:(long long)a0;
- (void)_updateRingColors;
- (struct CGPath { } *)_pathForRing:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPath { } *)_pathForDiameter:(double)a0 center:(struct CGPoint { double x0; double x1; })a1;

@end

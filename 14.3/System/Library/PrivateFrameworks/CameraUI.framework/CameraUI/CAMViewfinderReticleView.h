@class UIImageView, UIView;

@interface CAMViewfinderReticleView : UIView

@property (readonly, nonatomic) UIView *_topMaskingView;
@property (readonly, nonatomic) UIView *_bottomMaskingView;
@property (readonly, nonatomic) UIImageView *_viewportBorderView;
@property (readonly, nonatomic) UIImageView *_topLeftCornerView;
@property (readonly, nonatomic) UIImageView *_topRightCornerView;
@property (readonly, nonatomic) UIImageView *_bottomLeftCornerView;
@property (readonly, nonatomic) UIImageView *_bottomRightCornerView;
@property (readonly, nonatomic) double viewportTopInset;
@property (readonly, nonatomic) double viewportBottomInset;
@property (nonatomic) long long maskingStyle;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setViewportTopInset:(double)a0 bottomInset:(double)a1 animated:(BOOL)a2;
- (void)setMaskingStyle:(long long)a0 withDuration:(double)a1;
- (id)_newViewportTemplateImage;
- (id)_newViewportCornerImage;
- (void)_updateMaskingOpacityWithDuration:(double)a0;
- (double)_opacityForMaskingStyle:(long long)a0;

@end

@class SXLinearGradientFill, SXClippingView, SXGradientView;

@interface SXGradientFillView : SXFillView

@property (readonly, nonatomic) SXLinearGradientFill *gradientFill;
@property (readonly, nonatomic) SXClippingView *clippingView;
@property (readonly, nonatomic) SXGradientView *gradientView;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillFrameWithBoundingSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithGradientFill:(id)a0 gradientFactory:(id)a1;

@end

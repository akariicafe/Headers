@class SXAnimatedImage, SXImageFill, UIImage, SXClippingView, SXImageView, SXImageResource;

@interface SXImageFillView : SXFillView

@property (retain, nonatomic) SXClippingView *clippingView;
@property (readonly, nonatomic) SXImageView *imageView;
@property (readonly, nonatomic) SXImageFill *imageFill;
@property (readonly, nonatomic) SXImageResource *imageResource;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) SXAnimatedImage *animatedImage;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)load;
- (void)dealloc;
- (id)dragable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillFrameWithBoundingSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithImageFill:(id)a0 imageResource:(id)a1 imageViewFactory:(id)a2;

@end

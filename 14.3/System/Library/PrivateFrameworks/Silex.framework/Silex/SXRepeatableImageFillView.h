@class SXRepeatableImageView, SXClippingView, SXRepeatableImageFill;

@interface SXRepeatableImageFillView : SXFillView

@property (readonly, nonatomic) SXRepeatableImageFill *fill;
@property (readonly, nonatomic) SXRepeatableImageView *imageView;
@property (readonly, nonatomic) SXClippingView *clippingView;
@property (nonatomic) struct CGSize { double width; double height; } patternSize;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void)play;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)load;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)pause;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillFrameWithBoundingSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithRepeatableImageFill:(id)a0 imageView:(id)a1;

@end

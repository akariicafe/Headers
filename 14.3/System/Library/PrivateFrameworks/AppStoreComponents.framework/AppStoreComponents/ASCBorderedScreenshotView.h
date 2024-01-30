@class ASCArtworkView;

@interface ASCBorderedScreenshotView : UIView

@property (retain, nonatomic) ASCArtworkView *artworkView;

- (id)imageView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })preferredArtworkSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;

@end

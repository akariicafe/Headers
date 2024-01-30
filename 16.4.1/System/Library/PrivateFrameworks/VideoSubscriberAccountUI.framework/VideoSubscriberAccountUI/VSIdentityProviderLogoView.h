@class UIImageView, UIImage;

@interface VSIdentityProviderLogoView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *logo;
@property (readonly, nonatomic) double marginLength;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredImageSize;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_height;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageViewFrame;

@end

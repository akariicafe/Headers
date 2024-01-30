@class UIImageView, UIImage;

@interface AVTUIAnimatingImageView : UIView

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIImageView *fadeInImageView;
@property (retain, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (void)setContentMode:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)setContinuousCornerRadius:(double)a0;

@end

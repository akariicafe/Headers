@class UIImageView, UIImage;

@interface CPUIShadowImageView : UIView

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIImageView *placeholderView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *placeholderImage;

- (long long)contentMode;
- (void)setNeedsDisplay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentMode:(long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isDarkMode;
- (void)setupEffects;

@end

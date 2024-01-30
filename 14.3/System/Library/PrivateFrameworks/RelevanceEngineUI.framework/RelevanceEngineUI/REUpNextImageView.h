@class UIColor, UIImage, UIImageView;

@interface REUpNextImageView : UIView {
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundAccentImageView;
}

@property (retain, nonatomic) UIColor *fallbackTintColor;
@property (retain, nonatomic) UIImage *overrideImage;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setContentMode:(long long)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateColors;
- (BOOL)_hasMultipartImages;

@end

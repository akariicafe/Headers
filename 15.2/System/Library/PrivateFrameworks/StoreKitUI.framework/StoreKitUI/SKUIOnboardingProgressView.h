@class UIColor, NSString, UIImageView, UIImage, UILabel, SKUIShapeView;

@interface SKUIOnboardingProgressView : UIView {
    SKUIShapeView *_borderView;
    UIImageView *_imageView;
    SKUIShapeView *_progressView;
    UILabel *_titleLabel;
}

@property (nonatomic) double progress;
@property (copy, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredImageSize;

+ (struct CGSize { double x0; double x1; })preferredImageSizeForViewSize:(struct CGSize { double x0; double x1; })a0;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)_borderColor;
- (void)tintColorDidChange;
- (void)setProgress:(double)a0 animated:(BOOL)a1;

@end

@class UIView, CAGradientLayer, UIVisualEffectView;

@interface VUIProductUberBackgroundView : UIView

@property (nonatomic) long long configuredBlurInterfaceStyle;
@property (retain, nonatomic) CAGradientLayer *maskGradientLayer;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (nonatomic) double contentOffset;
@property (nonatomic) BOOL isChannelBanner;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) UIView *imageView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImageOffset:(double)a0;
- (void)configureBlurWithInterfaceStyle:(long long)a0;

@end

@class UIView, UIVisualEffectView, CAGradientLayer;

@interface VUIProductUberBackgroundView : VUIBaseView

@property (nonatomic) unsigned long long configuredBlurInterfaceStyle;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double contentOffset;
@property (nonatomic) BOOL isChannelBanner;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) UIView *imageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setImageOffset:(double)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)_configureGradientLayer:(id)a0 currentSizeClass:(long long)a1 mainRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)_gradientHeightForSizeClass:(long long)a0 mainRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)configureBlurEffectAndGradientWithInterfaceStyle:(unsigned long long)a0 mainRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)configureBlurWithInterfaceStyle:(unsigned long long)a0;
- (void)configureBlurWithInterfaceStyle:(unsigned long long)a0 mainRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)resetBlurEffectAndGradient;
- (void)setMasksBlur:(BOOL)a0;

@end

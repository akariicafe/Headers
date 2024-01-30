@class UIColor, NSString, UIVisualEffectView, UIView;

@interface MUBlurView : UIView {
    BOOL _isGaussianBlur;
    double _blurRadius;
    long long _blurEffectStyle;
}

@property (nonatomic) BOOL shouldBlur;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *nonBlurView;
@property (copy, nonatomic) UIColor *overlayColor;
@property (copy, nonatomic) NSString *blurGroupName;
@property (copy, nonatomic) UIColor *nonBlurredColor;
@property (nonatomic) unsigned long long style;

- (void)_setup;
- (void).cxx_destruct;
- (id)initWithBlurEffectStyle:(long long)a0;
- (void)_update;
- (id)initWithGaussianBlurWithRadius:(double)a0;
- (void)_transparencyStatusDidChange;

@end

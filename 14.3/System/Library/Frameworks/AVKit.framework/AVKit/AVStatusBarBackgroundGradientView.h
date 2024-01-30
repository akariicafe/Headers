@class CABackdropLayer, AVStatusBarBackgroundGradientViewSubview;

@interface AVStatusBarBackgroundGradientView : UIView

@property (readonly, nonatomic) CABackdropLayer *layer;
@property (retain, nonatomic) AVStatusBarBackgroundGradientViewSubview *gradientView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (double)alpha;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;

@end

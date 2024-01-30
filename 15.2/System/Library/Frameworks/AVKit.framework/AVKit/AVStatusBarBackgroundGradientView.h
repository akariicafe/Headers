@class CABackdropLayer, AVStatusBarBackgroundGradientViewSubview;

@interface AVStatusBarBackgroundGradientView : UIView

@property (readonly, nonatomic) CABackdropLayer *layer;
@property (retain, nonatomic) AVStatusBarBackgroundGradientViewSubview *gradientView;

+ (Class)layerClass;

- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (double)alpha;
- (void).cxx_destruct;

@end

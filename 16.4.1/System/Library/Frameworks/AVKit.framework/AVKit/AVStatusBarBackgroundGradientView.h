@class CABackdropLayer, AVStatusBarBackgroundGradientViewSubview;

@interface AVStatusBarBackgroundGradientView : UIView

@property (readonly, nonatomic) CABackdropLayer *layer;
@property (retain, nonatomic) AVStatusBarBackgroundGradientViewSubview *gradientView;

+ (Class)layerClass;

- (void)setAlpha:(double)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)alpha;

@end

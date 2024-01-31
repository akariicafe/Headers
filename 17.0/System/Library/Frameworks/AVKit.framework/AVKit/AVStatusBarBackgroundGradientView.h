@class CABackdropLayer, AVStatusBarBackgroundGradientViewSubview;

@interface AVStatusBarBackgroundGradientView : UIView

@property (readonly, nonatomic) CABackdropLayer *layer;
@property (retain, nonatomic) AVStatusBarBackgroundGradientViewSubview *gradientView;

+ (Class)layerClass;

- (double)alpha;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

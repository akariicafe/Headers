@class CAGradientLayer;

@interface AXGestureRecorderGradientView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;

+ (Class)layerClass;

- (void)_configureGradientWithTopColor:(id)a0 bottomColor:(id)a1 locations:(id)a2 animated:(BOOL)a3 duration:(double)a4 completion:(id /* block */)a5;
- (id)_copyColorsArrayWithTopColor:(id)a0 bottomColor:(id)a1;
- (id)_copyLocationsArrayWithTopColorLocation:(float)a0 bottomColorLocation:(float)a1;
- (void)configureGradientAnimatedWithTopColor:(id)a0 bottomColor:(id)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)configureGradientAnimatedWithTopColor:(id)a0 bottomColor:(id)a1 topColorLocation:(float)a2 bottomColorLocation:(float)a3 duration:(double)a4 completion:(id /* block */)a5;
- (void)configureGradientWithTopColor:(id)a0 bottomColor:(id)a1;
- (void)configureGradientWithTopColor:(id)a0 bottomColor:(id)a1 topColorLocation:(float)a2 bottomColorLocation:(float)a3;

@end

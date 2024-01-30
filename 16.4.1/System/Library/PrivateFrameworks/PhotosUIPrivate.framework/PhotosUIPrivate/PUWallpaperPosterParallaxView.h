@class PUWallpaperPosterMotionEffect;

@interface PUWallpaperPosterParallaxView : UIView

@property (retain, nonatomic) PUWallpaperPosterMotionEffect *motionEffect;
@property (readonly, copy, nonatomic) id /* block */ parallaxHandler;

- (void).cxx_destruct;
- (BOOL)_applyKeyPathsAndRelativeValues:(id)a0 forMotionEffect:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parallaxHandler:(id /* block */)a1;
- (void)startParallax;
- (void)stopParallax;

@end

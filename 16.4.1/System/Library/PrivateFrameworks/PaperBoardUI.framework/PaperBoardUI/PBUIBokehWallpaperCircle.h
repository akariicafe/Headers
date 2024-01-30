@class NSString;

@interface PBUIBokehWallpaperCircle : CALayer <CAAnimationDelegate> {
    long long _color;
    double _dxdt;
    double _dydt;
    double _speed;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } superviewBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newFadeAnimation;
+ (id)_newFlickerAnimation;
+ (id)_newScaleAnimation;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setColor:(long long)a0;
- (void)setAnimationsEnabled:(BOOL)a0;
- (void)_pauseAnimations;
- (void)_resumeAnimations;
- (void)configureAnimationsWithPhase:(double)a0;
- (id)initWithSuperviewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(long long)a1;
- (void)randomize;
- (void)updatePositionWithTime:(double)a0 dx:(double)a1 dy:(double)a2 lockScreen:(BOOL)a3;

@end

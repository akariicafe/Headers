@class NSTimer;

@interface SBFBokehWallpaperCircle : CALayer {
    NSTimer *_lifetimeTimer;
    long long _fillColor;
    BOOL _shouldBlink;
    BOOL _isFading;
    long long _direction;
    double _velocity;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalFrame;
}

@property (nonatomic, getter=isFadingOut) BOOL fadingOut;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } superviewBounds;
@property (nonatomic) BOOL shouldPause;
@property (nonatomic) BOOL isPulsating;

- (void)_timerFired;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (double)desiredOpacity;
- (struct CGPoint { double x0; double x1; })desiredPositionDeltaForX:(double)a0 y:(double)a1 lockScreen:(BOOL)a2;
- (void)setCircleColor:(long long)a0;
- (void)setAnimationsEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fillColor:(long long)a1;
- (void)startPulsatingCircle;
- (void)_animateInNewCircle;
- (double)randomOpacity;
- (void)_resumeAnimations;
- (void)_pauseAnimations;

@end

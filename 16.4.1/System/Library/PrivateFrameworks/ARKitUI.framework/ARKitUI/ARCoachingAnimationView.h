@class NSString, CAMetalLayer, ARCoachingUpdateManager;
@protocol ARCoachingRenderer;

@interface ARCoachingAnimationView : UIView <ARCoachingUpdateManagerDelegate> {
    CAMetalLayer *_metalLayer;
    ARCoachingUpdateManager *_updateManager;
    id<ARCoachingRenderer> _renderer;
    void /* unknown type, empty encoding */ _lastCameraRight;
    void /* unknown type, empty encoding */ _lastCameraTranslation;
    void /* unknown type, empty encoding */ _rotationStartCameraRight;
    void /* unknown type, empty encoding */ _rotationStartCameraTranslation;
    float _cubeAngle;
    BOOL _isRotating;
    BOOL _wasRotating;
    double _nextStateTime;
    long long _lastUpdateState;
    long long _currentCoachingGoal;
}

@property (nonatomic) long long animationState;
@property (nonatomic) BOOL isDeactivating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupView;
- (void)orientationChanged;
- (void)updateForCurrentTime:(double)a0 timeDelta:(double)a1;
- (double)calcNextAnimationSwitchTime:(double)a0 forState:(unsigned long long)a1;
- (void)clampCubeToQuarterRotation;
- (void)drawInDrawable:(id)a0 withCommandBuffer:(id)a1 timeDelta:(double)a2;
- (void)killCoachingAnimation;
- (void)resizeForDrawable:(id)a0;
- (void)startCoachingAnimation:(long long)a0;
- (void)updateAlternatingPlanes:(double)a0;
- (void)updateCubeRotation:(id)a0 motionTracker:(id)a1;
- (void)updateMetalLayer;
- (void)updateVerticalClamp:(double)a0;
- (void)updateWithFrame:(id)a0 motionTracker:(id)a1;

@end

@class AnimationEngine, CinematicFramingSessionOptions;
@protocol FramingSpaceManager;

@interface EdgeRectangleAnimator : NSObject <RectangleAnimator> {
    struct { float x; float y; float w; float vx; float vy; float vw; } _currentState;
    long long _movementState;
    AnimationEngine *_xAxisAnimationEngine;
    AnimationEngine *_yAxisAnimationEngine;
    AnimationEngine *_sizeAnimationEngine;
    id<FramingSpaceManager> _framingSpaceManager;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectangle;
@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (readonly, nonatomic) float xSpeed;
@property (readonly, nonatomic) float ySpeed;
@property (readonly, nonatomic) float sizeSpeed;
@property (nonatomic) float verticalAccelerationMultiplier;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })driveAnimationToTarget:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 inState:(long long)a2;
- (void)drivePivotAnimationsToTarget:(struct { float x0; float x1; float x2; float x3; float x4; float x5; })a0 withPivotDescriptions:(struct { float x0; float x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)driveWidthAnimationToTarget:(struct { float x0; float x1; float x2; float x3; float x4; float x5; })a0 withPivotDescriptions:(struct { float x0; float x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)driveXPivotWithLocation:(float)a0 velocity:(float)a1 pivotDescriptions:(struct { float x0; float x1; })a2 toTargetLocation:(float)a3 targetVelocity:(float)a4 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5;
- (void)driveYPivotWithLocation:(float)a0 velocity:(float)a1 pivotDescriptions:(struct { float x0; float x1; })a2 toTargetLocation:(float)a3 targetVelocity:(float)a4 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5;
- (id)initWithRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 framingSpaceManager:(id)a1;
- (void)resetToRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

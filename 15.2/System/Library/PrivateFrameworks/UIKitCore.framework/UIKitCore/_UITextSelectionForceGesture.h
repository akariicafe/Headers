@class UIKBPanGestureVelocitySample;

@interface _UITextSelectionForceGesture : UILongPressGestureRecognizer

@property (nonatomic) BOOL didLongPress;
@property (readonly, getter=_velocitySample) UIKBPanGestureVelocitySample *_velocitySample;
@property (readonly, getter=_previousVelocitySample) UIKBPanGestureVelocitySample *_previousVelocitySample;
@property (readonly, getter=_liftOffSample) UIKBPanGestureVelocitySample *_liftOffSample;
@property (nonatomic) double increasingForceTimestamp;
@property (nonatomic) double lastTouchTime;
@property (nonatomic) struct CGPoint { double x; double y; } lastSceneReferenceLocation;
@property (nonatomic) struct CGPoint { double x; double y; } lastUnadjustedSceneReferenceLocation;
@property (nonatomic) long long liftOffState;
@property (nonatomic) long long increasingForceState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } velocityRange;
@property (nonatomic) BOOL touchEclipsesVelocity;
@property (nonatomic) BOOL shouldFailWithoutForce;

- (BOOL)forceHasIncreasedForTimeInterval:(double)a0;
- (struct CGPoint { double x0; double x1; })_convertVelocitySample:(id)a0 fromSceneReferenceCoordinatesToView:(id)a1;
- (void)_centroidMovedTo:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1 physicalTouch:(id)a2;
- (void)_updateLiftOffState;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 fromSceneReferenceCoordinatesToView:(id)a1;
- (struct CGPoint { double x0; double x1; })_centroidInView:(id)a0;
- (void)_resetVelocitySamples;
- (void)enoughTimeElapsed:(id)a0;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 toSceneReferenceCoordinatesFromView:(id)a1;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (struct UIOffset { double x0; double x1; })_offsetInViewFromSceneReferenceLocation:(struct CGPoint { double x0; double x1; })a0 toSceneReferenceLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_adjustSceneReferenceLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_locationOfTouches:(id)a0;
- (BOOL)shouldResetRangeForVelocity:(struct CGPoint { double x0; double x1; })a0 previousVelocity:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end

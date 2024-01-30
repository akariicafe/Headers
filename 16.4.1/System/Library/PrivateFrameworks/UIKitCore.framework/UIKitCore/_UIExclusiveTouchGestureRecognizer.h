@protocol _UIExclusiveTouchGestureRecognizerDelegate;

@interface _UIExclusiveTouchGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) id<_UIExclusiveTouchGestureRecognizerDelegate> delegate;
@property (nonatomic) struct CGPoint { double x; double y; } maximumAbsoluteAccumulatedMovement;
@property (readonly, nonatomic) BOOL achievedMaximumAbsoluteAccumulatedMovement;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } accumulatedMovement;

- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)description;
- (void)reset;

@end

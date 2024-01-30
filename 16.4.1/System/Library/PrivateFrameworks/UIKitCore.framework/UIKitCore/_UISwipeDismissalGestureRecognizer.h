@interface _UISwipeDismissalGestureRecognizer : UIGestureRecognizer

@property (nonatomic) struct CGPoint { double x; double y; } originalTouchPoint;
@property (nonatomic) double allowableMovement;

+ (BOOL)_shouldDefaultToTouches;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;

@end

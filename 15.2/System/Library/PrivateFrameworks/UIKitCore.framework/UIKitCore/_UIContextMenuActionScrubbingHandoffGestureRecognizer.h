@interface _UIContextMenuActionScrubbingHandoffGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _initialLocation;
}

@property (nonatomic) double hysteresis;

+ (BOOL)_supportsTouchContinuation;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_beginGestureIfPossible;
- (BOOL)_gestureIsStillValid;
- (BOOL)_satisfiedHysteresis;

@end

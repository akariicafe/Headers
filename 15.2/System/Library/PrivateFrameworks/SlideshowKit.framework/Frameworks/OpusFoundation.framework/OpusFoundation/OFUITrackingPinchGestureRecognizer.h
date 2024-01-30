@interface OFUITrackingPinchGestureRecognizer : UIPinchGestureRecognizer {
    unsigned long long _leftTouchIndex;
    unsigned long long _rightTouchIndex;
    struct CGPoint { double x; double y; } _leftTouchLocation;
    struct CGPoint { double x; double y; } _rightTouchLocation;
    struct CGPoint { double x; double y; } _centerPoint;
    struct CGPoint { double x; double y; } _previousLeftLocation;
    struct CGPoint { double x; double y; } _previousRightLocation;
    double _originalWidth;
    double _originalAngle;
    long long _magnifyState;
    long long _rotateState;
    BOOL _startedPinchingOut;
    BOOL _startedPinchingIn;
}

@property unsigned long long zoomMode;
@property double pinchWidth;
@property double pinchAngle;
@property double pinchScale;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1 mode:(unsigned long long)a2;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end

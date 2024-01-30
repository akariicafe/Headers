@class UITouch, UIDelayedAction;

@interface UIDragRecognizer : UIGestureRecognizer {
    UIDelayedAction *_tooSlow;
}

@property (nonatomic) struct CGPoint { double x; double y; } startPosition;
@property (nonatomic) double startAngle;
@property (retain, nonatomic) UITouch *touch;
@property (retain, nonatomic) UIDelayedAction *ignoreTouch;
@property (nonatomic) BOOL restrictsToAngle;
@property (nonatomic) double angle;
@property (nonatomic) double maximumDeviation;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double quietPeriod;
@property (nonatomic) BOOL canBeginDrag;
@property (nonatomic) SEL checkCanBeginDrag;

+ (BOOL)_shouldDefaultToTouches;

- (void)tooSlow:(id)a0;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)clearIgnoreTouch;
- (void)clearTimer;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end

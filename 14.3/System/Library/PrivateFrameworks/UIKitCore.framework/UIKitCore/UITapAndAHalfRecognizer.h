@class UITouch, NSMutableSet, UIDelayedAction;

@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _startPoint;
    NSMutableSet *_activeTouches;
    int _currentNumberOfTaps;
    UIDelayedAction *_tapTimer;
}

@property (retain, nonatomic) UITouch *touch;
@property (nonatomic) int numberOfFullTaps;
@property (nonatomic) double allowableMovement;
@property (nonatomic) double minimumFinalPressDuration;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } locationOfFirstTap;

- (void)tooSlow:(id)a0;
- (void)startTapTimer:(double)a0;
- (void)clearTapTimer;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)recognized:(id)a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })translationInWindowCoordinates;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_verifyMovementInAllowableRange;
- (void)startRecognitionTimer:(double)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end

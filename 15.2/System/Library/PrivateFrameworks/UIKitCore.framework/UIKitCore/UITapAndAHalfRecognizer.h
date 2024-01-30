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
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)startRecognitionTimer:(double)a0;
- (void)startTapTimer:(double)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })translationInWindowCoordinates;
- (void)recognized:(id)a0;
- (void).cxx_destruct;
- (void)clearTapTimer;
- (void)_verifyMovementInAllowableRange;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end

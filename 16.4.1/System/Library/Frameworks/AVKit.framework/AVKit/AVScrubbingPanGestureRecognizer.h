@class AVPanGestureIncrement, NSMutableArray;

@interface AVScrubbingPanGestureRecognizer : UIGestureRecognizer {
    NSMutableArray *_candidateGestureIncrements;
    AVPanGestureIncrement *_lastPanGestureIncrement;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } translation;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } velocity;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_debugLogGestureIncrements:(id)a0 withPrefix:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end

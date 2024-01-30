@class NSTimer, NSMutableArray;

@interface AVTouchGestureRecognizer : UIGestureRecognizer {
    NSTimer *_gestureWarmUpDelayTimer;
    NSMutableArray *_candidateGestureIncrementsMultiTouchInfo;
}

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end

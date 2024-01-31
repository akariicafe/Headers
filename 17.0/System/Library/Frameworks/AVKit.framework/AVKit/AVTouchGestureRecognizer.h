@class NSTimer, NSMutableArray;

@interface AVTouchGestureRecognizer : UIGestureRecognizer {
    NSTimer *_gestureWarmUpDelayTimer;
    NSMutableArray *_candidateGestureIncrementsMultiTouchInfo;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end

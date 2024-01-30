@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer {
    BOOL mZoomTimedOut;
}

- (void)p_stopCancellationTimer;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)p_startCancellationTimer;
- (void)p_cancelAfterDelay;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end

@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer {
    BOOL mZoomTimedOut;
}

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)p_cancelAfterDelay;
- (void)p_stopCancellationTimer;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)p_startCancellationTimer;

@end

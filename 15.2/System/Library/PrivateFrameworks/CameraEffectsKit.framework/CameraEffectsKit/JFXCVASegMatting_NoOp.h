@interface JFXCVASegMatting_NoOp : JFXMatting

- (id)initForFrameSet:(id)a0;
- (BOOL)isValidForCameraFrameSet:(id)a0;
- (void)alphaMatteForFrameSet:(id)a0 mattingPerfState:(id)a1 completionHandler:(id /* block */)a2;

@end

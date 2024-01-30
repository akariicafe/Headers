@interface SBFTapToWakeGestureRecognizer : UIGestureRecognizer

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_isTapEvent:(struct __IOHIDEvent { } *)a0;
- (void)_succesfullyRecognizeFromEvent:(struct __IOHIDEvent { } *)a0;

@end

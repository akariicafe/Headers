@interface SBFTapToWakeGestureRecognizer : UIGestureRecognizer

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_succesfullyRecognizeFromEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)_isTapEvent:(struct __IOHIDEvent { } *)a0;

@end

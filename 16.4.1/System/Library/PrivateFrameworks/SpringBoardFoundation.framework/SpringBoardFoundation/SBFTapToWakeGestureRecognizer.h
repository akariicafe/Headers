@interface SBFTapToWakeGestureRecognizer : UIGestureRecognizer

- (BOOL)_isTapEvent:(struct __IOHIDEvent { } *)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_succesfullyRecognizeFromEvent:(struct __IOHIDEvent { } *)a0;

@end

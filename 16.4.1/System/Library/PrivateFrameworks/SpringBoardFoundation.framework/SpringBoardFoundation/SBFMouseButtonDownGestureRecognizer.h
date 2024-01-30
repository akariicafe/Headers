@interface SBFMouseButtonDownGestureRecognizer : UIGestureRecognizer

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_isMouseButtonClickEvent:(struct __IOHIDEvent { } *)a0;
- (void)_succesfullyRecognizeFromEvent:(struct __IOHIDEvent { } *)a0;

@end

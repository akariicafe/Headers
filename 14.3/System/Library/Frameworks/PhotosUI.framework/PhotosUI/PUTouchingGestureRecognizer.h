@interface PUTouchingGestureRecognizer : UIGestureRecognizer

@property (nonatomic, setter=_setTouchCount:) unsigned long long _touchCount;

- (void)_decrementTouchesBy:(unsigned long long)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_incrementTouchesBy:(unsigned long long)a0;

@end

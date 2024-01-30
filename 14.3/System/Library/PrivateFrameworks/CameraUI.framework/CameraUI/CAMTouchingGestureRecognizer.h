@interface CAMTouchingGestureRecognizer : UIGestureRecognizer

@property (nonatomic, setter=_setTouchCount:) unsigned long long _touchCount;

- (void)_decrementTouchesBy:(unsigned long long)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)cancelGesture;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_incrementTouchesBy:(unsigned long long)a0;
- (void)_updateStateFromTouchCount:(unsigned long long)a0 toTouchCount:(unsigned long long)a1;

@end

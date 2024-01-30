@interface UIScrollViewKnobLongPressGestureRecognizer : UILongPressGestureRecognizer

@property (nonatomic) BOOL forPointer;

- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (BOOL)_isGestureType:(long long)a0;

@end

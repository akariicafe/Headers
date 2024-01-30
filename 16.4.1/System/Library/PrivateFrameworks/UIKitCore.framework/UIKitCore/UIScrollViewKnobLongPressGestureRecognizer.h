@interface UIScrollViewKnobLongPressGestureRecognizer : UILongPressGestureRecognizer

@property (nonatomic) BOOL forPointer;

- (BOOL)_isGestureType:(long long)a0;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;

@end

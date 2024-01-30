@interface _UIDragLiftGestureRecognizer : UILongPressGestureRecognizer

@property (nonatomic, getter=_isForPointer) BOOL isForPointer;

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;

@end

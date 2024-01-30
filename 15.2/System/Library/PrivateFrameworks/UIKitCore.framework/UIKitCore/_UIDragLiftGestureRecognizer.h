@interface _UIDragLiftGestureRecognizer : UILongPressGestureRecognizer

@property (nonatomic, getter=_isForPointer) BOOL isForPointer;

- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end

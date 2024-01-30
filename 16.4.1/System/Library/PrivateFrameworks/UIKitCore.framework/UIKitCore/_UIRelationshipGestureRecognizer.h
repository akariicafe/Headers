@interface _UIRelationshipGestureRecognizer : UIGestureRecognizer

@property (nonatomic) BOOL succeedsOnTouchesEnded;

- (void)_succeed;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_fail;

@end

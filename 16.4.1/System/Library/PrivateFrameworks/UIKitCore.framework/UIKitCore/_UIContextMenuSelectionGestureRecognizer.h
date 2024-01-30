@interface _UIContextMenuSelectionGestureRecognizer : UIGestureRecognizer

@property (nonatomic) struct CGPoint { double x; double y; } originalLocation;
@property (nonatomic) struct CGVector { double dx; double dy; } allowableMovement;

+ (BOOL)_supportsTouchContinuation;

- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_cancelOrFail;
- (id)init;

@end

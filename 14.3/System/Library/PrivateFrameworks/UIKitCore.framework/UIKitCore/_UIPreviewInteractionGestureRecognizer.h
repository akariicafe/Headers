@interface _UIPreviewInteractionGestureRecognizer : UILongPressGestureRecognizer

- (void)cancel;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)recognize;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setDelegate:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end

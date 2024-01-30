@interface ICiOSTableAttachmentView : ICTableAttachmentView

- (id)accessibilityLabel;
- (void)setHighlightColor:(id)a0;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)tableAttachmentViewController;

@end

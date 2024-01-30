@interface WAKResponder : NSObject

- (void)insertText:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)mouseMoved:(id)a0;
- (void)insertParagraphSeparator:(id)a0;
- (BOOL)tryToPerform:(SEL)a0 with:(id)a1;
- (void)keyUp:(id)a0;
- (void)moveUp:(id)a0;
- (void)moveLeft:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)moveDown:(id)a0;
- (void)touch:(id)a0;
- (void)deleteBackward:(id)a0;
- (void)deleteForward:(id)a0;
- (void)moveLeftAndModifySelection:(id)a0;
- (void)moveRightAndModifySelection:(id)a0;
- (void)moveDownAndModifySelection:(id)a0;
- (void)moveUpAndModifySelection:(id)a0;
- (id)nextResponder;
- (void)handleEvent:(id)a0;
- (void)mouseUp:(id)a0;
- (void)keyDown:(id)a0;
- (void)moveRight:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)mouseDown:(id)a0;
- (void)_forwardEvent:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;

@end

@interface WAKResponder : NSObject

- (void)mouseUp:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)handleEvent:(id)a0;
- (void)keyUp:(id)a0;
- (id)nextResponder;
- (void)insertText:(id)a0;
- (BOOL)resignFirstResponder;
- (void)keyDown:(id)a0;
- (void)moveUp:(id)a0;
- (void)deleteBackward:(id)a0;
- (void)deleteForward:(id)a0;
- (void)mouseDown:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveDownAndModifySelection:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveLeftAndModifySelection:(id)a0;
- (void)moveRight:(id)a0;
- (void)moveRightAndModifySelection:(id)a0;
- (void)moveUpAndModifySelection:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)_forwardEvent:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)insertParagraphSeparator:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)touch:(id)a0;
- (BOOL)tryToPerform:(SEL)a0 with:(id)a1;

@end

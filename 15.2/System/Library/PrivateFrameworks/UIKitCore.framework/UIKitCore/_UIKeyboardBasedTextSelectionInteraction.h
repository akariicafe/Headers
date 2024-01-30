@class UITextGestureTuning;

@interface _UIKeyboardBasedTextSelectionInteraction : _UIKeyboardTextSelectionInteraction

@property (readonly, nonatomic) UITextGestureTuning *gestureTuning;

- (void)oneFingerForcePan:(id)a0;
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)didMoveToView:(id)a0;
- (BOOL)enclosingScrollViewIsScrolling;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_createGestureTuningIfNecessary;
- (void)endOneFingerSelectWithExecutionContext:(id)a0;
- (id)owner;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint { double x0; double x1; })a0 viaDrag:(BOOL)a1;
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint { double x0; double x1; })a0 executionContext:(id)a1;
- (void)dealloc;
- (void)oneFingerForcePress:(id)a0;
- (void)_processGestureForCustomHighlighter:(id)a0;

@end

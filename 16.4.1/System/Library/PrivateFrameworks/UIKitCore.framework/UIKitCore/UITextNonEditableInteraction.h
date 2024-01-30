@interface UITextNonEditableInteraction : UITextInteraction {
    long long _mode;
}

- (void)oneFingerTapInUneditable:(id)a0;
- (void)_oneFingerTapInUneditableActionAtLocation:(struct CGPoint { double x0; double x1; })a0 textInput:(id)a1 canReplaceText:(BOOL)a2 modifierFlags:(long long)a3;
- (BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)a0 forGestureRecognizer:(id)a1;
- (void)doubleTapInUneditable:(id)a0;
- (id)initWithMode:(long long)a0;
- (void)toggleSelectionCommands;
- (BOOL)_shouldAllowOneFingerTapInUneditable:(id)a0;
- (void)oneFingerTapInUneditableAccelerated:(id)a0;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)a0;
- (void)_oneFingerTapInUneditableAcceleratedActionAtLocation:(struct CGPoint { double x0; double x1; })a0 textInput:(id)a1 canReplaceText:(BOOL)a2;
- (void)_performGestureType:(long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a3 forTouchType:(long long)a4;

@end

@class NSString, _UIKeyboardTextSelectionController, UITextRange, UITextModernLoupeSession;

@interface UITextRefinementAcceleratedTouchBehavior : NSObject <UITextRefinementInteractionBehaviorDelegate> {
    UITextRange *_originalTextRange;
    _UIKeyboardTextSelectionController *_activeSelectionController;
    UITextModernLoupeSession *_loupeSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0 forLoupeGesture:(id)a1;
- (void)adjustVariableDelaySettingsForLoupeInteraction:(id)a0;
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)a0;
- (void)configureLoupeGestureRecognizer:(id)a0 forTextLoupeInteraction:(id)a1;
- (Class)gestureRecognizerClassForLoupeInteraction:(id)a0;
- (BOOL)loupeGestureRecognizerShouldBegin:(id)a0 forTextLoupeInteraction:(id)a1;
- (BOOL)shouldAllowEnforcedTouchTypeForTouch:(id)a0 forGestureRecognizer:(id)a1;
- (struct CGPoint { double x0; double x1; })startPointForLoupeGesture:(id)a0;
- (void)textLoupeInteraction:(id)a0 gestureChangedWithState:(long long)a1 location:(id /* block */)a2 translation:(id /* block */)a3 velocity:(id /* block */)a4 modifierFlags:(long long)a5 shouldCancel:(BOOL *)a6;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0 forLoupeGesture:(id)a1;
- (BOOL)triggeredByLongPressGesture:(id)a0;
- (BOOL)usesTouchAlignment;

@end

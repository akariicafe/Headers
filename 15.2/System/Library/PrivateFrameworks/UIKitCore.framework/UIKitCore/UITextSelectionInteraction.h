@class _UIKeyboardTextSelectionController, UITextGestureTuning, UITextSelectionGrabberSuppressionAssertion, UITextModernLoupeSession;

@interface UITextSelectionInteraction : UITextInteraction {
    double _lastTapTimestamp;
    struct CGPoint { double x; double y; } _lastTapLocation;
    UITextGestureTuning *_gestureTuning;
    BOOL _indirectSelectionType;
    BOOL _viewConformsToTextInput;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalCaretRect;
    BOOL _wasOriginallyFirstResponder;
    long long _granularityToHandOff;
    _UIKeyboardTextSelectionController *_activeSelectionController;
    UITextSelectionGrabberSuppressionAssertion *_grabberSuppressionAssertion;
    UITextModernLoupeSession *_activeLoupeSession;
}

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)oneFingerTapSelectsAll:(id)a0;
- (void)confirmMarkedText:(id)a0;
- (void)_handleMultiTapGesture:(id)a0;
- (void)didMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_isWithinRepeatedTapTimeForTouch:(id)a0;
- (void)_showSelectionCommandsIfApplicableAfterDelay:(double)a0;
- (void)tapAndAHalf:(id)a0;
- (id)_transientState;
- (BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)a0 forGestureRecognizer:(id)a1;
- (id)initWithMode:(long long)a0;
- (id)initWithMode:(long long)a0 indirect:(BOOL)a1;
- (void)tappedToUpdateSelectionWithGesture:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 granularity:(long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)_isRepeatedTap:(id)a0 gestureLocationOut:(struct CGPoint { double x0; double x1; } *)a1;
- (void)setHybridSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)finishSetup;
- (BOOL)shouldHandleOneFingerTapInUneditable:(id)a0;
- (long long)_textGranularityForNumberOfTaps:(unsigned long long)a0;
- (void)twoFingerRangedSelectGesture:(id)a0;
- (void).cxx_destruct;
- (void)willUpdateSelectionWithGesture:(id)a0;
- (void)_createGestureTuningIfNecessary;
- (BOOL)_isShiftKeyBeingHeldForGesture:(id)a0;
- (void)tappedToPositionCursorWithGesture:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 granularity:(long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)interaction_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)tappedToSelectTextWithGesture:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 granularity:(long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)_usesIndirectSelectionBehavior;
- (void)toggleSelectionCommands;
- (BOOL)_usesPencilSelectionBehaviorForGesture:(id)a0;
- (long long)handOffGranularity;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)a0;
- (void)didUpdateSelectionWithGesture:(id)a0;
- (void)_updateTapGestureHistoryWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isNowWithinRepeatedTapTime;
- (void)_applyTransientState:(id)a0;
- (void)_checkForRepeatedTap:(id)a0 gestureLocationOut:(struct CGPoint { double x0; double x1; } *)a1;

@end

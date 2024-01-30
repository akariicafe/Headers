@class UIResponder, UITextCursorAssertionController, NSString;
@protocol UITextCursorAssertion, UITextInput, PKTextInputCursorControllerDelegate;

@interface PKTextInputCursorController : NSObject <PKTextInputDebugStateReporting> {
    id<UITextCursorAssertion> _nonBlinkingAssertion;
    id<UITextCursorAssertion> _nonVisibleAssertion;
    id<UITextCursorAssertion> _ghostAssertion;
    BOOL _cursorShouldFlash;
    id /* block */ _restoreAfterFlashCursorBlock;
    BOOL _lastKnownTextInputResponderWasKey;
}

@property (nonatomic, setter=_setCursorStyle:) long long cursorStyle;
@property (nonatomic, setter=_setMode:) long long mode;
@property (weak, nonatomic, setter=_setLastKnownTextInputResponder:) UIResponder<UITextInput> *_lastKnownTextInputResponder;
@property (nonatomic, setter=_setTrackedLastKnownTextInputResponderWindowIsKey:) BOOL _trackedLastKnownTextInputResponderWindowIsKey;
@property (retain, nonatomic) UITextCursorAssertionController *implicitAssertionController;
@property (nonatomic) double _lastSwitchToIdleWritingStateTime;
@property (weak, nonatomic) id<PKTextInputCursorControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isCursorWeak;
@property (nonatomic) double lastElementTapToFocusTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetState;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)keyboardWillShow:(id)a0;
- (void)reportDebugStateDescription:(id /* block */)a0;
- (void)makeCursorStrong;
- (void)customHighlightFeedbackVisibilityDidChange;
- (void)writingStateDidChange;
- (void)firstResponderDidChange:(id)a0;
- (void)keyWindowDidChange:(id)a0;
- (void)textInputSourceDidChange:(id)a0;
- (void)_handleUndoRedo:(id)a0;
- (void)_updateCursorStyle;
- (void)_updateAssertionsForCurrentState;
- (void)removeAllAssertions;
- (id)_currentAssertionController;
- (BOOL)scribbleEnabled;
- (BOOL)lastKnownTextInputResponderWindowIsKey;
- (void)_writingStateEvaluationTimerExpired;
- (void)_delayedRevokeTemporaryStrongMode;
- (void)makeCursorWeak;
- (id)_implicitAssertionControllerIfPossible;
- (void)invalidateGhostAssertion;
- (void)invalidateNonVisibleAssertion;
- (void)invalidateNonBlinkingAssertion;
- (id)_windowForResponder:(id)a0;
- (void)_textInputSourceDidChange:(id)a0;
- (BOOL)canMakeCursorWeakForResponder:(id)a0;
- (void)_handleDidPerformReturn:(id)a0;
- (void)flashCursor;
- (void)makeCursorTemporarilyStrongWhileWriting;
- (void)simulateFirstResponderChangeForTesting:(id)a0;

@end

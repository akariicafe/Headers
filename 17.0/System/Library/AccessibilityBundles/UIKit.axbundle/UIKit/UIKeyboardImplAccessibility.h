@interface UIKeyboardImplAccessibility : __UIKeyboardImplAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)handleKeyboardInput:(id)a0 executionContext:(id)a1;
- (void)acceptCandidate:(id)a0;
- (BOOL)autocorrectSpellingEnabled;
- (BOOL)callShouldInsertText:(id)a0;
- (BOOL)_shouldMinimizeForHardwareKeyboard;
- (void)completeHandleKeyEvent:(id)a0;
- (void)setInputModeToNextInPreferredListWithExecutionContext:(id)a0;
- (BOOL)presentTextCompletionAsMarkedText:(id)a0;
- (void)showKeyboardIfNeeded;
- (void)acceptAutocorrectionWithCompletionHandler:(id /* block */)a0;
- (void)setShift:(BOOL)a0 autoshift:(BOOL)a1;
- (void)updateTextCandidateView;
- (BOOL)acceptWord:(id)a0 firstDelete:(unsigned long long)a1 forInput:(id)a2;
- (void)deleteBackwardAndNotify:(BOOL)a0;
- (void)updateAutocorrectPrompt:(id)a0;
- (void)unmarkText:(id)a0;
- (BOOL)performKeyboardOutput:(id)a0 checkingDelegate:(BOOL)a1 forwardToRemoteInputSource:(BOOL)a2;
- (void)dealloc;
- (void)completeDeleteFromInput;
- (void)dismissKeyboard;
- (void)showKeyboard;
- (void)setInputMode:(id)a0 userInitiated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideKeyboard;
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)a0 characterCountForRapidDelete:(int)a1;
- (BOOL)autocorrectionPreference;
- (unsigned int)_setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inputString:(id)a2 lastInputString:(id)a3 searchString:(id)a4 compareAttributes:(BOOL)a5;
- (void)setInHardwareKeyboardMode:(BOOL)a0;
- (void)textDidChange:(id)a0;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityAnnounceHardwareKeyboardVisibilityChange:(BOOL)a0;
- (void)_axHandleVoiceOverStatusChanged:(id)a0;
- (BOOL)_axIsHandwritingEnabled;
- (BOOL)_axIsLastKeyBackspace;
- (BOOL)_axIsObservingVoiceOverNotifications;
- (void)_axRegisterForVoiceOverNotifications:(id)a0;
- (void)_axSetIsHandwritingEnabled:(BOOL)a0;
- (void)_axSetIsLastKeyBackspace:(BOOL)a0;
- (void)_axSetIsObservingVoiceOverNotifications:(BOOL)a0;
- (void)_axUnregisterForVoiceOverNotifications:(id)a0;
- (void)setInputModeToNextInPreferredList;
- (void)updateLayoutForInterfaceOrientation:(long long)a0;

@end

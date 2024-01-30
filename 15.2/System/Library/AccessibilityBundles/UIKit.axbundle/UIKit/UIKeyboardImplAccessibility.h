@interface UIKeyboardImplAccessibility : __UIKeyboardImplAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)deleteBackwardAndNotify:(BOOL)a0;
- (void)setShift:(BOOL)a0 autoshift:(BOOL)a1;
- (void)updateAutocorrectPrompt:(id)a0;
- (void)showKeyboard;
- (void)_setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inputString:(id)a2 searchString:(id)a3 compareAttributes:(BOOL)a4;
- (BOOL)autocorrectionPreference;
- (void)acceptCandidate:(id)a0;
- (void)setInHardwareKeyboardMode:(BOOL)a0;
- (void)hideKeyboard;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)callShouldInsertText:(id)a0;
- (void)performKeyboardOutput:(id)a0 checkingDelegate:(BOOL)a1 forwardToRemoteInputSource:(BOOL)a2;
- (void)unmarkText:(id)a0;
- (BOOL)_shouldMinimizeForHardwareKeyboard;
- (void)handleKeyboardInput:(id)a0 executionContext:(id)a1;
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)a0 characterCountForRapidDelete:(int)a1;
- (void)showKeyboardIfNeeded;
- (BOOL)autocorrectSpellingEnabled;
- (BOOL)acceptWord:(id)a0 firstDelete:(unsigned long long)a1 forInput:(id)a2;
- (void)textDidChange:(id)a0;
- (void)completeDeleteFromInput;
- (void)setInputMode:(id)a0 userInitiated:(BOOL)a1;
- (void)completeHandleKeyEvent:(id)a0;
- (void)setInputModeToNextInPreferredListWithExecutionContext:(id)a0;
- (void)updateTextCandidateView;
- (void)dealloc;
- (void)dismissKeyboard;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axUnregisterForVoiceOverNotifications:(id)a0;
- (void)_axRegisterForVoiceOverNotifications:(id)a0;
- (void)_axHandleVoiceOverStatusChanged:(id)a0;
- (BOOL)_axIsObservingVoiceOverNotifications;
- (void)_axSetIsObservingVoiceOverNotifications:(BOOL)a0;
- (BOOL)_axIsHandwritingEnabled;
- (void)_axSetIsLastKeyBackspace:(BOOL)a0;
- (BOOL)_axIsLastKeyBackspace;
- (void)setInputModeToNextInPreferredList;
- (void)_accessibilityAnnounceHardwareKeyboardVisibilityChange:(BOOL)a0;
- (void)updateLayoutForInterfaceOrientation:(long long)a0;
- (void)_axSetIsHandwritingEnabled:(BOOL)a0;

@end

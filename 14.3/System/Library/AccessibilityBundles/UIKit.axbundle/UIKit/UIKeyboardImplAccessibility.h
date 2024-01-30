@interface UIKeyboardImplAccessibility : __UIKeyboardImplAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)insertText:(id)a0;
- (void)completeDeleteFromInput;
- (void)handleKeyboardInput:(id)a0 executionContext:(id)a1;
- (void)setInputModeToNextInPreferredListWithExecutionContext:(id)a0;
- (void)dealloc;
- (void)acceptCandidate:(id)a0;
- (void)setInputMode:(id)a0 userInitiated:(BOOL)a1;
- (void)completeHandleKeyEvent:(id)a0;
- (void)unmarkText:(id)a0;
- (void)updateAutocorrectPrompt:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)dismissKeyboard;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setShift:(BOOL)a0 autoshift:(BOOL)a1;
- (BOOL)autocorrectSpellingEnabled;
- (void)showKeyboard;
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)a0 characterCountForRapidDelete:(int)a1;
- (BOOL)autocorrectionPreference;
- (BOOL)_shouldMinimizeForHardwareKeyboard;
- (BOOL)acceptWord:(id)a0 firstDelete:(unsigned long long)a1 forInput:(id)a2;
- (void)_setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inputString:(id)a2 searchString:(id)a3 compareAttributes:(BOOL)a4;
- (BOOL)callShouldInsertText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTextCandidateView;
- (void)hideKeyboard;
- (void)textDidChange:(id)a0;
- (void)deleteBackwardAndNotify:(BOOL)a0;
- (BOOL)callShouldReplaceExtendedRange:(long long)a0 withText:(id)a1 includeMarkedText:(BOOL)a2;
- (void)_performKeyboardOutput:(id)a0 shouldCheckDelegate:(BOOL)a1;
- (void)toggleSoftwareKeyboard;
- (void)showKeyboardIfNeeded;
- (void)setInHardwareKeyboardMode:(BOOL)a0;
- (BOOL)_axIsObservingAppLifecycleNotifications;
- (void)_axUnregisterForVoiceOverNotifications:(id)a0;
- (void)_axRegisterForVoiceOverNotifications:(id)a0;
- (void)_axHandleVoiceOverStatusChanged:(id)a0;
- (void)_axSetIsObservingAppLifecycleNotifications:(BOOL)a0;
- (BOOL)_axIsObservingVoiceOverNotifications;
- (void)_axSetIsObservingVoiceOverNotifications:(BOOL)a0;
- (void)_axUpdateAutocorrectionSettings;
- (BOOL)_axIsHandwritingEnabled;
- (void)setInputModeToNextInPreferredList;
- (void)updateLayoutForInterfaceOrientation:(long long)a0;
- (void)_axResetFKAFocusToFirstResponder;
- (id)_accessibilityKeyboardInputDelegate;
- (BOOL)_axShouldShowKeyboard;
- (void)_axShowKeyboardIfHidden;
- (void)_axSetIsHandwritingEnabled:(BOOL)a0;
- (BOOL)_accessibilityInputObjectUsesSecureText:(id)a0;

@end

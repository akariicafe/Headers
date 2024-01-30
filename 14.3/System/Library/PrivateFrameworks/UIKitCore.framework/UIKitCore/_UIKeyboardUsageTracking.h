@interface _UIKeyboardUsageTracking : NSObject

+ (void)keyboardSetToInputMode:(id)a0 fromPrevious:(id)a1;
+ (void)keyboardGestureOneFingerForcePress:(BOOL)a0 withPressCount:(int)a1;
+ (void)selectedPredictiveInputCandidate:(id)a0 isAutocorrection:(BOOL)a1 index:(unsigned long long)a2;
+ (void)variantDeleteIncrement;
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)a0;
+ (void)loginPasswordFromAutofillIncrement;
+ (void)appAutofillFilled;
+ (void)normalPunctuationKeyCount;
+ (void)keyboardPerformanceFromTouchStart:(double)a0 until:(double)a1;
+ (void)keyboardExtensionsOnDevice;
+ (void)loginPasswordFromKeyboardIncrement;
+ (void)showVariantsIncrement;
+ (void)keyboardPerformanceFromTouchRelease:(double)a0 until:(double)a1;
+ (void)keyboardExtensionCrashed;
+ (void)panAlternateKeyFlickDownCount;
+ (void)keyboardReachabilityDistribution:(double)a0;
+ (void)predictionViewState:(BOOL)a0 forInputMode:(id)a1;
+ (void)keyboardExtensionPrimaryLanguageChanged;
+ (void)appAutofillCredentialFromSafariUI;
+ (void)signupPasswordFromKeyboardIncrement;
+ (void)showCharacterPreviewPreference:(BOOL)a0;
+ (void)appAutofillDetectedDecrement;
+ (void)keyboardGestureSelectedPredictiveInputCandidate;
+ (void)dualStringsKeyFlickUpCount;
+ (void)appAutofillDetectedIncrement;
+ (void)restAndTypeTriggered;
+ (void)undoKeyCount;
+ (void)keyboardGestureOneFingerForcePan:(BOOL)a0;
+ (void)appAutofillExtraKeyTapped;
+ (void)keyboardTotalOnScreenTime:(double)a0 orientation:(long long)a1;
+ (void)signupPasswordFromAutofillIncrement;
+ (void)keyboardGestureTwoFingerTap:(BOOL)a0 withTapCount:(int)a1;
+ (void)singleStringKeyFlickUpCount;
+ (void)redoKeyCount;
+ (void)letterCaseToggleIncrement;
+ (void)keyboardGestureSetPredictionPreference:(BOOL)a0;
+ (void)keyboardSupportsTouch:(BOOL)a0;
+ (void)showLowercaseKeyplanePreference:(BOOL)a0;
+ (void)inputSwitcherSetPredictionPreference:(BOOL)a0;
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)a0;

@end

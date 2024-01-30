@interface _UIKeyboardUsageTracking : NSObject

+ (void)keyboardExtensionCrashed;
+ (void)letterCaseToggleIncrement;
+ (void)keyboardExtensionsOnDevice;
+ (void)undoKeyCount;
+ (void)panAlternateKeyFlickDownCount;
+ (void)signupPasswordFromAutofillIncrement;
+ (void)normalPunctuationKeyCount;
+ (void)appAutofillCredentialFromSafariUI;
+ (void)keyboardPerformanceFromTouchStart:(double)a0 until:(double)a1;
+ (void)showVariantsIncrement;
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)a0;
+ (void)restAndTypeTriggered;
+ (void)showCharacterPreviewPreference:(BOOL)a0;
+ (void)keyboardPerformanceFromTouchRelease:(double)a0 until:(double)a1;
+ (void)keyboardSupportsTouch:(BOOL)a0;
+ (void)appAutofillFilled;
+ (void)keyboardGestureOneFingerForcePress:(BOOL)a0 withPressCount:(int)a1;
+ (void)loginPasswordFromAutofillIncrement;
+ (void)keyboardSetToInputMode:(id)a0 fromPrevious:(id)a1;
+ (void)keyboardReachabilityDistribution:(double)a0;
+ (void)redoKeyCount;
+ (void)keyboardTotalOnScreenTime:(double)a0 orientation:(long long)a1;
+ (void)appAutofillDetectedDecrement;
+ (void)selectedPredictiveInputCandidate:(id)a0 isAutocorrection:(BOOL)a1 index:(unsigned long long)a2;
+ (void)signupPasswordFromKeyboardIncrement;
+ (void)keyboardGestureSelectedPredictiveInputCandidate;
+ (void)singleStringKeyFlickUpCount;
+ (void)keyboardGestureTwoFingerTap:(BOOL)a0 withTapCount:(int)a1;
+ (void)keyboardGestureSetPredictionPreference:(BOOL)a0;
+ (void)inputSwitcherSetPredictionPreference:(BOOL)a0;
+ (void)appAutofillDetectedIncrement;
+ (void)keyboardExtensionPrimaryLanguageChanged;
+ (void)showLowercaseKeyplanePreference:(BOOL)a0;
+ (void)appAutofillExtraKeyTapped;
+ (void)loginPasswordFromKeyboardIncrement;
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)a0;
+ (void)predictionViewState:(BOOL)a0 forInputMode:(id)a1;
+ (void)dualStringsKeyFlickUpCount;
+ (void)keyboardGestureOneFingerForcePan:(BOOL)a0;
+ (void)variantDeleteIncrement;

@end

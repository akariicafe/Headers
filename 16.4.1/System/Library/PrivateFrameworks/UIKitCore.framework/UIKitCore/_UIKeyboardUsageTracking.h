@interface _UIKeyboardUsageTracking : NSObject

+ (void)appAutofillFilled;
+ (void)letterCaseToggleIncrement;
+ (void)keyboardGestureTwoFingerTap:(BOOL)a0 withTapCount:(int)a1;
+ (void)undoKeyCount;
+ (void)loginPasswordFromAutofillIncrement;
+ (void)signupPasswordFromKeyboardIncrement;
+ (void)keyboardGestureOneFingerForcePress:(BOOL)a0 withPressCount:(int)a1;
+ (void)appAutofillExtraKeyTapped;
+ (void)appAutofillCredentialFromSafariUI;
+ (void)signupPasswordFromAutofillIncrement;
+ (void)showVariantsIncrement;
+ (void)keyboardGestureSelectedPredictiveInputCandidate;
+ (void)selectedPredictiveInputCandidate:(id)a0 isAutocorrection:(BOOL)a1 index:(unsigned long long)a2;
+ (void)predictionViewState:(BOOL)a0 forInputMode:(id)a1;
+ (void)appAutofillDetectedIncrement;
+ (void)dualStringsKeyFlickUpCount;
+ (void)restAndTypeTriggered;
+ (void)keyboardTotalOnScreenTime:(double)a0 orientation:(long long)a1;
+ (void)keyboardSupportsTouch:(BOOL)a0;
+ (void)normalPunctuationKeyCount;
+ (void)variantDeleteIncrement;
+ (void)showCharacterPreviewPreference:(BOOL)a0;
+ (void)keyboardReachabilityDistribution:(double)a0;
+ (void)inputSwitcherSetPredictionPreference:(BOOL)a0;
+ (void)keyboardPerformanceFromTouchStart:(double)a0 until:(double)a1;
+ (void)loginPasswordFromKeyboardIncrement;
+ (void)panAlternateKeyFlickDownCount;
+ (void)keyboardExtensionPrimaryLanguageChanged;
+ (void)keyboardGestureSetPredictionPreference:(BOOL)a0;
+ (void)redoKeyCount;
+ (void)keyboardExtensionCrashed;
+ (void)keyboardExtensionsOnDevice;
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)a0;
+ (void)showLowercaseKeyplanePreference:(BOOL)a0;
+ (void)keyboardPerformanceFromTouchRelease:(double)a0 until:(double)a1;
+ (void)singleStringKeyFlickUpCount;
+ (void)keyboardGestureOneFingerForcePan:(BOOL)a0;
+ (void)keyboardSetToInputMode:(id)a0 fromPrevious:(id)a1;
+ (void)appAutofillDetectedDecrement;
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)a0;

@end

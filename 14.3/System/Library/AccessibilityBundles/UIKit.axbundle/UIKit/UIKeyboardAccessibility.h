@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)_accessibilityAutomationType;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)_accessibilityTriggerDictationFromPath:(id)a0;
- (id)_accessibilityNativeFocusPreferredElement;
- (void)insertDictationResult:(id)a0;
- (void)dictationRecognitionFailed;
- (void)activate;
- (BOOL)_iosAccessibilityPerformAction:(int)a0 withValue:(id)a1 fencePort:(unsigned int)a2;
- (void)deactivate;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (BOOL)_accessibilityKeyboardIsContinuousPathTracking;
- (BOOL)_accessibilityKeyboardIsContinuousPathAvailable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityDirectInteractionFrame;
- (BOOL)_axDeleteByCharacter;
- (BOOL)_axDeleteByWord;
- (BOOL)_axAdvanceKeyboardPlane:(BOOL)a0;
- (BOOL)_axCommitWord;
- (BOOL)_axEnterTextValue:(id)a0;
- (BOOL)_axAdvanceKeyboardSuggestion:(BOOL)a0;
- (BOOL)_axAdvanceInternationalKeyboard:(BOOL)a0;
- (BOOL)_axShift;
- (BOOL)_axShiftLock;
- (BOOL)_accessibilitySwitchToGestureMode:(BOOL)a0;
- (void)_voiceOverStatus:(id)a0;

@end

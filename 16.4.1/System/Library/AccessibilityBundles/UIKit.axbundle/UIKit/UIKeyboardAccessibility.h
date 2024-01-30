@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)deactivate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)insertDictationResult:(id)a0;
- (BOOL)canBecomeFocused;
- (void)dealloc;
- (void)activate;
- (void)dictationRecognitionFailed;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityDirectInteractionFrame;
- (BOOL)_accessibilityKeyboardIsContinuousPathAvailable;
- (BOOL)_accessibilityKeyboardIsContinuousPathTracking;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (id)_accessibilityNativeFocusPreferredElement;
- (BOOL)_accessibilityTriggerDictationFromPath:(id)a0;
- (BOOL)_iosAccessibilityPerformAction:(int)a0 withValue:(id)a1 fencePort:(unsigned int)a2;
- (void)_voiceOverStatus:(id)a0;

@end

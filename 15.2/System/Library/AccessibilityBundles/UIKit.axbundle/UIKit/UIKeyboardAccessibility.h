@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)activate;
- (void)dictationRecognitionFailed;
- (void)deactivate;
- (void)dealloc;
- (void)insertDictationResult:(id)a0;
- (BOOL)_iosAccessibilityPerformAction:(int)a0 withValue:(id)a1 fencePort:(unsigned int)a2;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (BOOL)_accessibilityKeyboardIsContinuousPathTracking;
- (BOOL)_accessibilityKeyboardIsContinuousPathAvailable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityDirectInteractionFrame;
- (BOOL)_accessibilityTriggerDictationFromPath:(id)a0;
- (id)_accessibilityNativeFocusPreferredElement;
- (void)_voiceOverStatus:(id)a0;

@end

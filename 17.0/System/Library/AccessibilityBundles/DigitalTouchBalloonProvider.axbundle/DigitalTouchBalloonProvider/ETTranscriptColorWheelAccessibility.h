@interface ETTranscriptColorWheelAccessibility : __ETTranscriptColorWheelAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)updatePickerPositionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilityAdjustColorPickerBy:(double)a0;
- (void)_accessibilityDecrementColorPicker;
- (double)_accessibilityDifferenceBetweenAngle:(double)a0 andAngle:(double)a1;
- (void)_accessibilityIncrementColorPicker;
- (double)_accessibilityOriginalPickerRotation;
- (void)_accessibilitySetOriginalPickerRotation:(double)a0;
- (void)_accessibilitySpeakPickerColor;

@end

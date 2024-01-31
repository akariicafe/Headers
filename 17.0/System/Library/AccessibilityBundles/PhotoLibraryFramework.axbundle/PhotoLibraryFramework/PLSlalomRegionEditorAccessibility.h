@interface PLSlalomRegionEditorAccessibility : __PLSlalomRegionEditorAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setEndValue:(double)a0 notify:(BOOL)a1;
- (void)setStartValue:(double)a0 notify:(BOOL)a1;
- (void)_accessibilityIncrementMockSlider:(id)a0 largeStep:(BOOL)a1;
- (void)_accessibilityDecrementMockSlider:(id)a0 largeStep:(BOOL)a1;
- (double)_accessibilitySliderDeltaForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

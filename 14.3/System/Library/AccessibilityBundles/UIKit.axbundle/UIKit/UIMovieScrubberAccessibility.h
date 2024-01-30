@interface UIMovieScrubberAccessibility : __UIMovieScrubberAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)movieScrubberTrackView:(id)a0 clampedSizeWidthDelta:(double)a1 actualSizeWidthDelta:(double)a2 originXDelta:(double)a3 minimumVisibleValue:(double)a4 maximumVisibleValue:(double)a5;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (long long)accessibilityContainerType;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)setThumbIsVisible:(BOOL)a0;
- (void)_updateThumbLocation;
- (void)_initSubviews;
- (void)setTrimEndValue:(double)a0;
- (void)_trimAnimationDidStop:(BOOL)a0 glassView:(id)a1;
- (void)_setValue:(double)a0 andSendAction:(BOOL)a1;
- (void)_sliderAnimationDidStop:(BOOL)a0;
- (void)setTrimStartValue:(double)a0;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityDecrementMockSlider:(id)a0 largeStep:(BOOL)a1;
- (void)_accessibilityIncrementMockSlider:(id)a0 largeStep:(BOOL)a1;
- (void)_accessibilityClearChildren;
- (double)_accessibilitySliderDeltaForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_accessibilityNotifyDelegateWillBeginEditing;
- (void)_accessibilityNotifyDelegateScrubberDidBeginScrubbingWithHandle:(int)a0;
- (void)_accessibilityNotifyDelegateEditingStartValueDidChange:(double)a0;
- (void)_accessibilityNotifyDelegateScrubberDidEndScrubbingWithHandle:(int)a0;
- (void)_accessibilityNotifyDelegateEditingEndValueDidChange:(double)a0;

@end

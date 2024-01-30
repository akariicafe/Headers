@interface UIMovieScrubberAccessibility : __UIMovieScrubberAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_initSubviews;
- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (void)_setValue:(double)a0 andSendAction:(BOOL)a1;
- (void)_sliderAnimationDidStop:(BOOL)a0;
- (id)accessibilityElements;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isAccessibilityElement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_trimAnimationDidStop:(BOOL)a0 glassView:(id)a1;
- (void)_updateThumbLocation;
- (void)movieScrubberTrackView:(id)a0 clampedSizeWidthDelta:(double)a1 actualSizeWidthDelta:(double)a2 originXDelta:(double)a3 minimumVisibleValue:(double)a4 maximumVisibleValue:(double)a5;
- (void)setThumbIsVisible:(BOOL)a0;
- (void)setTrimEndValue:(double)a0;
- (void)setTrimStartValue:(double)a0;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityIncrementMockSlider:(id)a0 largeStep:(BOOL)a1;
- (void)_accessibilityDecrementMockSlider:(id)a0 largeStep:(BOOL)a1;

@end

@interface MediaControlsTimeControlAccessibility : __MediaControlsTimeControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)_updateLabels:(double)a0 withRemainingDuration:(double)a1;
- (void)_axPostUpdate;

@end

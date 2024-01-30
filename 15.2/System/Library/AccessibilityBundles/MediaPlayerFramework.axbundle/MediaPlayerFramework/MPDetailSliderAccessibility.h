@interface MPDetailSliderAccessibility : __MPDetailSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)layoutSubviews;
- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityCommitPositionChange;
- (void)_axPostUpdate;

@end

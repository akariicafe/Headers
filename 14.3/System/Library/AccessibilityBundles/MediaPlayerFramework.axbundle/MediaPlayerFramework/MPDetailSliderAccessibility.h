@interface MPDetailSliderAccessibility : __MPDetailSliderAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (void)_accessibilityCommitPositionChange;
- (void)_axPostUpdate;

@end

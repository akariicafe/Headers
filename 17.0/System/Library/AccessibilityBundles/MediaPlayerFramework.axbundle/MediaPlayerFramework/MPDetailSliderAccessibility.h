@interface MPDetailSliderAccessibility : __MPDetailSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityCommitPositionChange;
- (void)_axPostUpdate;

@end

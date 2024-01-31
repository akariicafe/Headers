@interface HUQuickControlSliderViewAccessibility : __HUQuickControlSliderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_accessibilityControlName;
- (id)_accessibilitySingleControlHostViewController;
- (id)_accessibilityControlItem;
- (double)_axCurrentAdjustableValue;
- (double)_axCurrentPrimary;
- (double)_axCurrentSecondary;
- (BOOL)_axHasSecondarySlider;
- (BOOL)_axSetAdjustsMax;
- (BOOL)_axSetAdjustsMin;
- (void)_axSetShouldAdjustSecondary:(BOOL)a0;
- (BOOL)_axShouldAdjustSecondary;
- (void)_axUpdateControlValue:(double)a0 incrementing:(BOOL)a1;

@end

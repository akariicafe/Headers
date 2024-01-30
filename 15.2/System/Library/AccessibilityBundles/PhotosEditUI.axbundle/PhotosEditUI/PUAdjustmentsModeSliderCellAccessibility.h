@interface PUAdjustmentsModeSliderCellAccessibility : __PUAdjustmentsModeSliderCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)_setAXAdjustmentsToolController:(id)a0;
- (id)_axAdjustmentsToolController;
- (void)_axSetAdjustmentValue:(double)a0;
- (void)_axSetAdjustmentsToolController:(id)a0;

@end

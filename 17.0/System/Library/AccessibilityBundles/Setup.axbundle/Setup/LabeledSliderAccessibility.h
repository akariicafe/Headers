@interface LabeledSliderAccessibility : __LabeledSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (double)_accessibilityIncreaseAmount:(BOOL)a0;
- (float)_accessibilityLabeledSliderValue;
- (void)_accessibilityReportModeChanged;

@end

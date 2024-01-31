@interface CCUISteppedSliderViewAccessibility : __CCUISteppedSliderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityCustomActions;
- (void)setNumberOfSteps:(unsigned long long)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (void)_accessibilityAdjustSliderValueInForwardDirection:(BOOL)a0;

@end

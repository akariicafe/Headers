@interface PlayerTimeControlAccessibility : __PlayerTimeControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (double)_accessibilityMaxValue;
- (double)_accessibilityNumberValue;
- (double)_accessibilityIncreaseAmount:(BOOL)a0;
- (BOOL)_axIsLiveContent;

@end

@interface PlayerTimeControlAccessibility : __PlayerTimeControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_accessibilityAbsoluteValue;
- (void)_accessibilityIncreaseAmount:(BOOL)a0;
- (BOOL)_axIsLiveContent;

@end

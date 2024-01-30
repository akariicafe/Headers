@interface CEKLightingControlAccessibility : __CEKLightingControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityIsVerticalAdjustableElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (void)_axChangeToLightingEffectAtIndex:(long long)a0;
- (BOOL)_accessibilityInTopLevelTabLoop;

@end

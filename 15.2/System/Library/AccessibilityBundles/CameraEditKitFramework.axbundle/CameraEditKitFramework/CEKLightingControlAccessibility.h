@interface CEKLightingControlAccessibility : __CEKLightingControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilityIsVerticalAdjustableElement;
- (void)_axChangeToLightingEffectAtIndex:(long long)a0;
- (BOOL)_accessibilityInTopLevelTabLoop;

@end

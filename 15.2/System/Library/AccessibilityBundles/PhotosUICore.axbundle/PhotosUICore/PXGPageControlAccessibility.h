@interface PXGPageControlAccessibility : __PXGPageControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (long long)_accessibilityPageIndex;
- (long long)_accessibilityPageCount;
- (id)_axPageControl;

@end

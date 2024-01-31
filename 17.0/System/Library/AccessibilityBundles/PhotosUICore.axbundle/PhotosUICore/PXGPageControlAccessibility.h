@interface PXGPageControlAccessibility : __PXGPageControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (id)_axPageControl;

@end

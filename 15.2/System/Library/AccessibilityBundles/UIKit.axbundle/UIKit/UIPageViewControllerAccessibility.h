@interface UIPageViewControllerAccessibility : __UIPageViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)accessibilityScroll:(long long)a0;
- (void)_pageControlValueChanged:(id)a0;
- (id)_accessibilityScrollStatus;

@end

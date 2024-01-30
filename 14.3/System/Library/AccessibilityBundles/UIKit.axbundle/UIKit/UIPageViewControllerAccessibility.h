@interface UIPageViewControllerAccessibility : __UIPageViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)accessibilityScroll:(long long)a0;
- (id)_accessibilityScrollStatus;
- (void)_pageControlValueChanged:(id)a0;
- (void)_accessibilitySendScrollStatus;
- (BOOL)_axScrollPageController:(BOOL)a0;

@end

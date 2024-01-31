@interface EKDayViewControllerAccessibility : __EKDayViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_scrollViewDidEndDecelerating:(id)a0;
- (void)_relayoutDaysDuringScrolling;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityScrollStatusForScrollView:(id)a0;
- (id)_axDayString;

@end

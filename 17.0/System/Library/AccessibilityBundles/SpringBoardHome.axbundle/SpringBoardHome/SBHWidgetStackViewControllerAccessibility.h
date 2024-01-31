@interface SBHWidgetStackViewControllerAccessibility : __SBHWidgetStackViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityCustomActions;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityScrollStatusForScrollView:(id)a0;
- (BOOL)_accessibilityScrollToNextWidget;
- (BOOL)_accessibilityScrollToPreviousWidget;
- (BOOL)_accessibilityScrollToWidgetNext:(BOOL)a0;

@end

@interface NCNotificationLongLookViewControllerAccessibility : __NCNotificationLongLookViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)_axLongLookView;
- (id)_axModalAncestorsForLongLookView:(id)a0;
- (Class)_axNotificationBannerWindowClass;
- (Class)_axPagedScrollViewClass;
- (void)_axSetModalAncestorsModal:(BOOL)a0;
- (Class)_ax_UIInteractiveHighlightContentViewClass;

@end

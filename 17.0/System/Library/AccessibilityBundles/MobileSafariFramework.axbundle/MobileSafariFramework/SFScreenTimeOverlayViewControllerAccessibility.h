@interface SFScreenTimeOverlayViewControllerAccessibility : __SFScreenTimeOverlayViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)hideBlockingViewControllerWithCompletionHandler:(id /* block */)a0;
- (id)showBlockingViewControllerForURL:(id)a0 withPolicy:(long long)a1 animated:(BOOL)a2;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axHideWebView:(BOOL)a0;
- (BOOL)_axShouldHideWebView;

@end

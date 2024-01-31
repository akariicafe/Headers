@interface BrowserRootViewControllerAccessibility : __BrowserRootViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_setUpFloatingSidebarButton;
- (void)setShowingSidebar:(BOOL)a0 completion:(id /* block */)a1;
- (void)sidebarDimmingViewDismiss:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySpeakThisViews;

@end

@interface PXPhotosDetailsUIViewControllerAccessibility : __PXPhotosDetailsUIViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_loadWidgets;
- (BOOL)widgetComposition:(id)a0 requestViewControllerDismissalAnimated:(BOOL)a1;
- (void)_ensureScrollViewController;
- (void)_setAXDetailsDismissedBlock:(id /* block */)a0;
- (id /* block */)_axDetailsDismissedBlock;
- (void)_axSetDetailsDismissedBlock:(id /* block */)a0;

@end

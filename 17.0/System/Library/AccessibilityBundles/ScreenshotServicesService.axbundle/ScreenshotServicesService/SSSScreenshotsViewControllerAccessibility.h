@interface SSSScreenshotsViewControllerAccessibility : __SSSScreenshotsViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidAppear:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityAnnotateItems;
- (void)_accessibilityPostLayoutChangeIfNecessary;
- (BOOL)_axDidPostNotification;
- (void)_axSetDidPostNotification:(BOOL)a0;
- (void)_configureBarsIfNecessary;

@end

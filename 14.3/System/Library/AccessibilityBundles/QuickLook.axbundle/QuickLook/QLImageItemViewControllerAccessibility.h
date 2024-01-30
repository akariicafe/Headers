@interface QLImageItemViewControllerAccessibility : __QLImageItemViewControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewDidAppear:(BOOL)a0;
- (id)_axPhotoDescriptionFromContents:(id)a0 context:(id)a1;

@end

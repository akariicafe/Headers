@interface QLLivePhotoItemViewControllerAccessibility : __QLLivePhotoItemViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewDidAppear:(BOOL)a0;
- (id)_axPhotoDescriptionFromContext:(id)a0;

@end

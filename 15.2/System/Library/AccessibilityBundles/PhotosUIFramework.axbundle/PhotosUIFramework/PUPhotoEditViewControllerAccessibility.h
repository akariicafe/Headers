@interface PUPhotoEditViewControllerAccessibility : __PUPhotoEditViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)viewDidLoad;
- (void)_updateToolbarsAnimated:(BOOL)a0;
- (void)_reloadToolbarButtonsIfNeeded;
- (void)_updateMainActionButtonAnimated:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;

@end

@interface PUPhotoEditViewControllerAccessibility : __PUPhotoEditViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_reloadToolbarButtonsIfNeeded;
- (void)_updateMainActionButtonAnimated:(BOOL)a0;
- (void)_updateToolbarsAnimated:(BOOL)a0;

@end

@interface CCUIMenuModuleViewControllerAccessibility : __CCUIMenuModuleViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (BOOL)_accessibilityControlCenterShouldExpandContentModule;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityControlCenterButtonIdentifier;
- (id)_accessibilityControlCenterButtonLabel;
- (BOOL)_accessibilityControlCenterMenuItemAtIndexIsValid:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityControlCenterButtonFrame;
- (id)_accessibilityControlCenterButtonHint;
- (id)_accessibilityModuleViewElements;

@end

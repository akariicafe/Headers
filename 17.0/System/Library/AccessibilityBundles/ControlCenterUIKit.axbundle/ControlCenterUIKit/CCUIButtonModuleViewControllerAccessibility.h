@interface CCUIButtonModuleViewControllerAccessibility : __CCUIButtonModuleViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityControlCenterButtonIdentifier;
- (id)_accessibilityControlCenterButtonLabel;
- (id)_accessibilityControlCenterElementToFocusAfterClose;
- (unsigned long long)_accessibilityControlCenterButtonAdditionalTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityControlCenterButtonFrame;
- (id)_accessibilityControlCenterButtonHint;
- (BOOL)_accessibilityControlCenterButtonIsToggle;
- (id)_accessibilityControlCenterButtonPath;

@end

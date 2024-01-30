@interface AXSB_UIAlertControllerSafeCategory : __AXSB_UIAlertControllerSafeCategory_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)viewDidAppear:(BOOL)a0;
- (BOOL)_canDismissWithGestureRecognizer;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_applyAccessibilityLoadAccessibilityInformation;

@end

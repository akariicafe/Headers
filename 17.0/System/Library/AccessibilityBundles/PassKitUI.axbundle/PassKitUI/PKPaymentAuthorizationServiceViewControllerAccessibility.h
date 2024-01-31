@interface PKPaymentAuthorizationServiceViewControllerAccessibility : __PKPaymentAuthorizationServiceViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidAppear:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_addPassphraseViewControllerToHierarchy:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handleModelUpdate;
- (void)_removePassphraseViewFromHierarchyWithCompletionHandler:(id /* block */)a0;
- (void)biometricAttemptFailed;
- (void)setFooterState:(long long)a0 string:(id)a1 animated:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)_accessibilitySetTotalMetaLabel;
- (BOOL)_axPaymentViewIsVisible;
- (BOOL)_axPhysicalButtonIsVisible;
- (id)_axPrevPaymentLabel;
- (void)_axSetPrevPaymentLabel:(id)a0;

@end

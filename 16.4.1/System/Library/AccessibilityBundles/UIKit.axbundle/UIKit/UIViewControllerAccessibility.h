@interface UIViewControllerAccessibility : __UIViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)setAccessibilityLabel:(id)a0;
- (void)_presentViewController:(id)a0 modalSourceViewController:(id)a1 presentationController:(id)a2 animationController:(id)a3 interactionController:(id)a4 completion:(id /* block */)a5;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (id)_overridingPreferredFocusEnvironment;
- (void)_primitiveSetNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_setNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)performSegueWithIdentifier:(id)a0 sender:(id)a1;
- (void)presentViewController:(id)a0 withTransition:(int)a1 completion:(id /* block */)a2;
- (BOOL)_accessibilityIsFKARunningForFocusItem;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (id)_accessibilitySpeakThisViewController;
- (id)_accessibilitySpeakThisViews;
- (BOOL)accessibilityPostScreenChangedForChildViewController:(id)a0 isAddition:(BOOL)a1;
- (BOOL)_accessibilityPresentedControllerModalizes;
- (BOOL)_accessibilityPresentsAsPopup;
- (BOOL)_accessibilityShouldPostScreenChangedOnPresentation;
- (id)_accessibilitySpeakThisView;

@end

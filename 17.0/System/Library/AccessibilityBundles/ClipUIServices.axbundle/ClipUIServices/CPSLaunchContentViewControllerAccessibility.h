@interface CPSLaunchContentViewControllerAccessibility : __CPSLaunchContentViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)_updateContent;
- (BOOL)accessibilityPerformEscape;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axBackgroundView;
- (id)_axDescriptionLabel;
- (id)_axCloseButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_axFrameForInformationContainerView;
- (id)_axInformationContainerView;
- (id)_axNameLabel;
- (id)_axOpenButton;

@end

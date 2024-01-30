@interface _UIPreviewPlatterPresentationControllerAccessibility : ___UIPreviewPlatterPresentationControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)platterContainerView;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_createActionsViewIfNecessary;
- (BOOL)_axPerformEscape;

@end

@interface _UIContextMenuPresentationControllerAccessibility : ___UIContextMenuPresentationControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)_createMenuViewIfNecessaryForMenu:(id)a0;
- (id)platterContainerView;
- (void)_accessibilityLoadAccessibilityInformation;

@end

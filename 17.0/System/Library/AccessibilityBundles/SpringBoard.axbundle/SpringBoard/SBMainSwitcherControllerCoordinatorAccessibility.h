@interface SBMainSwitcherControllerCoordinatorAccessibility : __SBMainSwitcherControllerCoordinatorAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_loadContentViewControllerIfNecessaryForAllWindowScenes;
- (id)_activeDisplaySwitcherController;
- (void)keyboardFocusController:(id)a0 externalSceneDidAcquireFocus:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axSetUpSwitcherViewControllers;
- (id)_axFluidSwitcherViewController;
- (BOOL)_axIsAppSwitcherPeeking;
- (BOOL)_axIsAppSwitcherPeekingSlideOver;
- (BOOL)_axIsAppSwitcherPeekingSplitView;
- (BOOL)_axIsChamoisSwitcherVisible;
- (BOOL)_axIsFloatingSwitcherVisible;
- (BOOL)_axIsMainSwitcherVisible;
- (BOOL)_axIsShelfSwitcherVisible;
- (BOOL)_axIsTypeOfMainSwitcherVisible;
- (void)_axSetUpWrapperViews;

@end

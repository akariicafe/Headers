@interface SBNotificationCenterControllerAccessibility : __SBNotificationCenterControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)_accessibilityNotificationCenterGestureActive;
- (BOOL)_accessibilityNotificationGestureInProgress;
- (void)_accessibilitySetNotificationGestureInProgress:(BOOL)a0;
- (void)_cleanupAfterTransition:(BOOL)a0;
- (void)_handleShowNotificationCenterGesture:(id)a0;
- (void)dismissAnimated:(BOOL)a0 fromCurrentState:(BOOL)a1 withStepper:(id /* block */)a2 completion:(id /* block */)a3;

@end

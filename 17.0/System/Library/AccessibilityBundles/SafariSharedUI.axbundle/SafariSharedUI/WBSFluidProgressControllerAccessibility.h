@interface WBSFluidProgressControllerAccessibility : __WBSFluidProgressControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)finishFluidProgressWithProgressStateSource:(id)a0;
- (void)_sendUpdateFluidProgressToObservers:(id)a0 progressState:(id)a1 source:(id)a2 updateAnimationPhase:(BOOL)a3;
- (void)_updateFluidProgressWithProgressStateSource:(id)a0;
- (void)_axHandleProgressUpdate:(id)a0;

@end

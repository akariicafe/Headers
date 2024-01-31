@interface SBLockScreenManagerAccessibility : __SBLockScreenManagerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_handleAuthenticationFeedback:(id)a0;
- (void)_setUILocked:(BOOL)a0;
- (void)lockUIFromSource:(int)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (BOOL)biometricAuthenticationCoordinator:(id)a0 requestsUnlockWithIntent:(int)a1;
- (BOOL)_finishUIUnlockFromSource:(int)a0 withOptions:(id)a1;
- (int)_axLastLockSource;
- (void)_axSetLastLockSource:(int)a0;

@end

@interface SBRestoreFailureAlertItem : SBAlertItem

- (void)_rebootNow;
- (BOOL)forcesModalAlertAppearance;
- (void)performUnlockAction;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)suppressForKeynote;
- (BOOL)allowInSetup;
- (void)restartSystemEvent;

@end

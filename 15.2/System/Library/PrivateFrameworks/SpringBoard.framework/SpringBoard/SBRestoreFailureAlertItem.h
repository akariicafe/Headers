@interface SBRestoreFailureAlertItem : SBAlertItem

- (void)_rebootNow;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)shouldShowInLockScreen;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)performUnlockAction;
- (BOOL)suppressForKeynote;
- (BOOL)allowInSetup;
- (void)restartSystemEvent;

@end

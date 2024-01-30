@interface SBRestoreFailureAlertItem : SBAlertItem

- (void)_rebootNow;
- (BOOL)allowInSetup;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)forcesModalAlertAppearance;
- (void)performUnlockAction;
- (void)restartSystemEvent;
- (BOOL)shouldShowInLockScreen;
- (BOOL)suppressForKeynote;

@end

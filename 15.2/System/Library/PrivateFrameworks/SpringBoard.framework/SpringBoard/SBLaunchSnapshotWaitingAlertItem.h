@interface SBLaunchSnapshotWaitingAlertItem : SBAlertItem

- (BOOL)reappearsAfterUnlock;
- (BOOL)allowLockScreenDismissal;
- (BOOL)reappearsAfterLock;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)shouldShowInLockScreen;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)behavesSuperModally;

@end

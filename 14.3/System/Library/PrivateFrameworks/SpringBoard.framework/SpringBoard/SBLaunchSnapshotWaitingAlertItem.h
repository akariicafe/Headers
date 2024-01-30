@interface SBLaunchSnapshotWaitingAlertItem : SBAlertItem

- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)reappearsAfterLock;
- (BOOL)allowLockScreenDismissal;
- (BOOL)behavesSuperModally;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)reappearsAfterUnlock;

@end

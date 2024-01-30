@interface SBPearlInterlockAlertItem : SBAlertItem

- (id)_title;
- (id)_message;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)reappearsAfterLock;
- (BOOL)shouldShowInLockScreen;

@end

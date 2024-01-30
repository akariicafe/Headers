@interface SBPearlInterlockAlertItem : SBAlertItem

- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)_title;
- (BOOL)reappearsAfterLock;
- (id)_message;

@end

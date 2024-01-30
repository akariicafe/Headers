@interface SBPearlInterlockAlertItem : SBAlertItem

- (id)_message;
- (id)_title;
- (BOOL)reappearsAfterLock;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;

@end

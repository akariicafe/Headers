@interface SBHomeScreenNagAlert : SBDismissOnlyAlertItem

- (BOOL)shouldShowInLockScreen;
- (BOOL)dismissOnLock;

@end

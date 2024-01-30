@interface SBNetworkReselectionAlertItem : SBPhoneAlertItem

- (id)initWithSlot:(long long)a0;
- (id)lockLabel;
- (id)shortLockLabel;
- (void)performUnlockAction;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)_showPrefs;

@end

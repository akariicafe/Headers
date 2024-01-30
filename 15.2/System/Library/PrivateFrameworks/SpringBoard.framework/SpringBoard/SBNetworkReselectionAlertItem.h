@interface SBNetworkReselectionAlertItem : SBPhoneAlertItem

- (id)initWithSlot:(long long)a0;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)performUnlockAction;
- (id)lockLabel;
- (id)shortLockLabel;
- (void)_showPrefs;

@end

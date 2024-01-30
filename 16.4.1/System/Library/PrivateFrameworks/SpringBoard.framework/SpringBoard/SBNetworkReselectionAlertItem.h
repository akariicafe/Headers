@interface SBNetworkReselectionAlertItem : SBPhoneAlertItem

- (id)initWithSlot:(long long)a0;
- (id)lockLabel;
- (id)shortLockLabel;
- (void)_showPrefs;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)performUnlockAction;

@end

@interface SBEDUTemporarySessionLogoutWarningAlertItem : SBAlertItem

@property (copy, nonatomic) id /* block */ logoutActionHandler;

- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;

@end

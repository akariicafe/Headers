@interface SBEDUTemporarySessionLogoutWarningAlertItem : SBAlertItem

@property (copy, nonatomic) id /* block */ logoutActionHandler;

- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;

@end

@interface SBEDUTemporarySessionLogoutWarningAlertItem : SBAlertItem

@property (copy, nonatomic) id /* block */ logoutActionHandler;

- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;

@end

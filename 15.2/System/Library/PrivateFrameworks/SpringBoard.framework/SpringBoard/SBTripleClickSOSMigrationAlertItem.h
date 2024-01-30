@interface SBTripleClickSOSMigrationAlertItem : SBAlertItem

- (BOOL)shouldShowInLockScreen;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)allowInSetup;

@end

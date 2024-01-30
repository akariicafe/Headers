@interface SBTripleClickSOSMigrationAlertItem : SBAlertItem

- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)allowInSetup;

@end

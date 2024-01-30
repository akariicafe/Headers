@interface SBTripleClickSOSMigrationAlertItem : SBAlertItem

- (BOOL)allowInSetup;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;

@end

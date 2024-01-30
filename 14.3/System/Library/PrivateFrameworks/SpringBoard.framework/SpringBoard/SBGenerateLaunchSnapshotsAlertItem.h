@interface SBGenerateLaunchSnapshotsAlertItem : SBAlertItem

@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)behavesSuperModally;
- (id)initWithHandler:(id /* block */)a0;
- (void)regenerateApplications:(id)a0;

@end

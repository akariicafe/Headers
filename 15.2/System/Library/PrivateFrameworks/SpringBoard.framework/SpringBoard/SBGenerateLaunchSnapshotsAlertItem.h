@interface SBGenerateLaunchSnapshotsAlertItem : SBAlertItem

@property (copy, nonatomic) id /* block */ handler;

- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (id)initWithHandler:(id /* block */)a0;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)behavesSuperModally;
- (void)regenerateApplications:(id)a0;

@end

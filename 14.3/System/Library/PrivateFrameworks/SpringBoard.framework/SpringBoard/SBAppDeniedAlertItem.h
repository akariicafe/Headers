@class SBApplication;

@interface SBAppDeniedAlertItem : SBAlertItem {
    SBApplication *_application;
}

- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;
- (id)initWithApp:(id)a0;

@end

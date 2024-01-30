@class SBApplication;

@interface SBAppFreeDevProfileNotTrustedAlertItem : SBAlertItem {
    SBApplication *_app;
}

- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;
- (id)initWithApp:(id)a0;

@end

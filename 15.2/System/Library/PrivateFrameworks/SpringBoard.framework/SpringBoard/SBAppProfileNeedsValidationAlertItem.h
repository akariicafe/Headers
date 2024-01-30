@class SBApplication;

@interface SBAppProfileNeedsValidationAlertItem : SBAlertItem {
    SBApplication *_application;
}

- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;
- (id)initWithApp:(id)a0;

@end

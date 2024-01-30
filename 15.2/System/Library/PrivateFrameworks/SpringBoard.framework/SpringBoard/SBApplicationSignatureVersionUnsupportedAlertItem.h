@class SBApplication;

@interface SBApplicationSignatureVersionUnsupportedAlertItem : SBAlertItem {
    SBApplication *_application;
}

- (id)initWithApplication:(id)a0;
- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (BOOL)forcesModalAlertAppearance;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;

@end

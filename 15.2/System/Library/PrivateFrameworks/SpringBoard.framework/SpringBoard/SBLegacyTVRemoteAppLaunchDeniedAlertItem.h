@interface SBLegacyTVRemoteAppLaunchDeniedAlertItem : SBAlertItem

- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)dismissOnLock;
- (id)_supportURLString;
- (BOOL)ignoreIfAlreadyDisplaying;

@end

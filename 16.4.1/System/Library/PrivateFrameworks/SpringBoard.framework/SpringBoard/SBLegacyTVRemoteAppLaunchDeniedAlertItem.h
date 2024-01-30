@interface SBLegacyTVRemoteAppLaunchDeniedAlertItem : SBAlertItem

- (BOOL)dismissOnLock;
- (id)_supportURLString;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)ignoreIfAlreadyDisplaying;

@end

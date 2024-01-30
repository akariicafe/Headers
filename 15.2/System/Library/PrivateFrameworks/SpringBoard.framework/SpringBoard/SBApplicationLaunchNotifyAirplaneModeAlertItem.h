@interface SBApplicationLaunchNotifyAirplaneModeAlertItem : SBApplicationLaunchNotifyAlertItem {
    BOOL _usesCellNetwork;
}

- (id)initWithApplication:(id)a0;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;

@end

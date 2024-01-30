@class NSString;

@interface SBBluetoothAccessoryLowPowerAlertItem : SBAlertItem {
    long long _batteryLevel;
    NSString *_accessoryName;
}

- (void).cxx_destruct;
- (BOOL)wakeDisplay;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)initWithAccessory:(id)a0 batteryLevel:(long long)a1;

@end

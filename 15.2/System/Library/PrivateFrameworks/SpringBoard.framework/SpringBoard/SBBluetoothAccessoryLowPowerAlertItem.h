@class NSString;

@interface SBBluetoothAccessoryLowPowerAlertItem : SBAlertItem {
    long long _batteryLevel;
    NSString *_accessoryName;
}

- (BOOL)wakeDisplay;
- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)initWithAccessory:(id)a0 batteryLevel:(long long)a1;

@end

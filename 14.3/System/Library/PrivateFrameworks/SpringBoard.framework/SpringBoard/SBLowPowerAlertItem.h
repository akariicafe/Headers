@interface SBLowPowerAlertItem : SBAlertItem {
    unsigned int _talkLevel;
}

+ (void)initialize;
+ (unsigned int)_thresholdForLevel:(unsigned int)a0;
+ (BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned int)a0;
+ (void)setBatteryLevel:(unsigned int)a0;

- (id)initWithLevel:(unsigned int)a0;
- (id)init;
- (BOOL)wakeDisplay;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)shouldShowInEmergencyCall;
- (void)_enableLowPowerMode;

@end

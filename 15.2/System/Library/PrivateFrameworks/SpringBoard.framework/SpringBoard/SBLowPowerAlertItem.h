@class SPBeaconManager;

@interface SBLowPowerAlertItem : SBAlertItem {
    unsigned int _talkLevel;
}

@property (nonatomic) BOOL showFindMyAlert;
@property (retain, nonatomic) SPBeaconManager *beaconManager;

+ (void)initialize;
+ (void)setBatteryLevel:(unsigned int)a0;
+ (unsigned int)_thresholdForLevel:(unsigned int)a0;
+ (BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned int)a0;

- (id)initWithLevel:(unsigned int)a0;
- (BOOL)wakeDisplay;
- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (id)init;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)shouldShowInEmergencyCall;
- (void)_enableLowPowerMode;

@end

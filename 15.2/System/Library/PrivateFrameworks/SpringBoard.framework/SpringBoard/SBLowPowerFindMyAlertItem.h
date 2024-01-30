@class SPBeaconManager;

@interface SBLowPowerFindMyAlertItem : SBAlertItem

@property (retain, nonatomic) SPBeaconManager *beaconManager;

+ (void)showFindMyAlert;
+ (void)_readSupportsFindMy:(id /* block */)a0;

- (BOOL)wakeDisplay;
- (BOOL)shouldShowInLockScreen;
- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;

@end

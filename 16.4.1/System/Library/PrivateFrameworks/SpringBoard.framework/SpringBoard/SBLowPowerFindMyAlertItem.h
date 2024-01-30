@class SPBeaconManager;

@interface SBLowPowerFindMyAlertItem : SBAlertItem

@property (retain, nonatomic) SPBeaconManager *beaconManager;

+ (void)showFindMyAlert;
+ (void)_readSupportsFindMy:(id /* block */)a0;

- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)shouldShowInLockScreen;
- (BOOL)wakeDisplay;

@end

@class NSString, NSTimer, BCBatteryDeviceController, CSBatteryChargingView, NSMutableArray;
@protocol SBLockScreenBatteryChargingViewControllerDelegate;

@interface SBLockScreenBatteryChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {
    BOOL _shouldDisplayBattery;
    CSBatteryChargingView *_chargingView;
    NSTimer *_visibilityTimer;
    NSMutableArray *_connectedDevices;
    BCBatteryDeviceController *_batteryDeviceController;
}

@property (weak, nonatomic) id<SBLockScreenBatteryChargingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectedDevicesDidChange:(id)a0;
- (long long)presentationStyle;
- (void)loadView;
- (id)chargingView;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)batteryVisible;
- (void)_clearVisibilityTimer;
- (void)_visibilityTimerFired:(id)a0;
- (id)initForDisplayOfBattery:(BOOL)a0;
- (void)presentWithAnimation:(BOOL)a0;
- (void)prepareForDismissalWithAnimation:(BOOL)a0;
- (void)showChargeLevelWithBatteryVisible:(BOOL)a0;

@end

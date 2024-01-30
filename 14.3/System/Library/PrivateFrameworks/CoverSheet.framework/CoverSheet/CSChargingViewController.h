@class NSString, CSBatteryChargingInfo, BCBatteryDeviceController, CSBatteryChargingView;

@interface CSChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {
    BCBatteryDeviceController *_batteryController;
    CSBatteryChargingView *_chargingView;
    CSBatteryChargingInfo *_chargingInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)presentationStyle;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)a0;
- (long long)presentationType;
- (id)init;
- (void).cxx_destruct;
- (BOOL)handleEvent:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)connectedDevicesDidChange:(id)a0;
- (void)viewDidLoad;
- (void)performDismissalAnimationWithCompletionHandler:(id /* block */)a0;
- (id)initWithChargingInfo:(id)a0;
- (double)durationBeforeDismissal;
- (void)_updateChargingViewIfNecessary;
- (void)_updateChargingViewLegibility;
- (void)_createNewChargingViewForDoubleBattery:(BOOL)a0;

@end

@class NSString, CSBatteryChargingInfo, BCBatteryDeviceController, NSMutableSet, CSBatteryChargingView;

@interface CSChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {
    BCBatteryDeviceController *_batteryController;
    CSBatteryChargingView *_chargingView;
    CSBatteryChargingInfo *_chargingInfo;
    NSMutableSet *_displayedBatteryDevices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)presentationStyle;
- (long long)presentationPriority;
- (void)connectedDevicesDidChange:(id)a0;
- (id)initWithChargingInfo:(id)a0;
- (void)performDismissalAnimationWithCompletionHandler:(id /* block */)a0;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (double)durationBeforeDismissal;
- (void)viewDidLoad;
- (void)_createNewChargingViewForDoubleBattery:(id)a0;
- (void)aggregateBehavior:(id)a0;
- (void)_updateChargingViewIfNecessary;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)_updateChargingViewLegibility;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;

@end

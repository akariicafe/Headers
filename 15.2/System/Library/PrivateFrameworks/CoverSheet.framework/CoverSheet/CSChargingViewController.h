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

- (void)connectedDevicesDidChange:(id)a0;
- (void)viewDidLoad;
- (long long)presentationStyle;
- (long long)presentationPriority;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)performDismissalAnimationWithCompletionHandler:(id /* block */)a0;
- (id)initWithChargingInfo:(id)a0;
- (double)durationBeforeDismissal;
- (void)_updateChargingViewIfNecessary;
- (void)_updateChargingViewLegibility;
- (void)_createNewChargingViewForDoubleBattery:(id)a0;

@end

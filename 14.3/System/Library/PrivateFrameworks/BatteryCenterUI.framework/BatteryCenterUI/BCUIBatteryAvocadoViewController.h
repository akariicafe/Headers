@class BCUIAvocadoViewController, NSString, BCBatteryDeviceController;

@interface BCUIBatteryAvocadoViewController : UIViewController <BCBatteryDeviceObserving> {
    BCBatteryDeviceController *_batteryDeviceController;
}

@property (retain, nonatomic, getter=_avocadoViewController, setter=_setAvocadoViewController:) BCUIAvocadoViewController *avocadoViewController;
@property (nonatomic) long long avocadoSize;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)imageForIconInfo:(struct BCUIIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; })a0;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)connectedDevicesDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)_synthesizedDebugIdentifier;
- (void)_configureAvocadoViewControllerIfNecessary;

@end

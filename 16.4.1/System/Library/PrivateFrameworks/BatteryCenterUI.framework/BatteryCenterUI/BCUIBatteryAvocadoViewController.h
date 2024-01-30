@class NSString, BCUIAvocadoViewController, BCBatteryDeviceController, NSObject;
@protocol OS_dispatch_queue;

@interface BCUIBatteryAvocadoViewController : UIViewController <BCBatteryDeviceObserving> {
    BCBatteryDeviceController *_batteryDeviceController;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic, getter=_avocadoViewController, setter=_setAvocadoViewController:) BCUIAvocadoViewController *avocadoViewController;
@property (nonatomic) long long widgetFamily;
@property (nonatomic) double scaleFactor;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)imageForIconInfo:(struct BCUIIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; })a0;

- (void)connectedDevicesDidChange:(id)a0;
- (void)setWidgetFamliy:(long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_configureAvocadoViewControllerIfNecessary;
- (void).cxx_destruct;
- (id)_synthesizedDebugIdentifier;
- (void)viewWillAppear:(BOOL)a0;

@end

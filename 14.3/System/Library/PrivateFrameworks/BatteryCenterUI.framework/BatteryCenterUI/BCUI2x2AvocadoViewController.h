@interface BCUI2x2AvocadoViewController : BCUIAvocadoViewController

- (void)viewWillLayoutSubviews;
- (void)_configureBatteryDeviceView:(id)a0 withBatteryDevice:(id)a1 transitionCoordinator:(id)a2;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (BOOL)_includeEmptyDevices;
- (id)_newBatteryDeviceView;

@end

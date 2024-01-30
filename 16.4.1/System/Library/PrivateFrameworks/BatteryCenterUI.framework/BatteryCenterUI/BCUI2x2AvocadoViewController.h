@interface BCUI2x2AvocadoViewController : BCUIAvocadoViewController

- (BOOL)_includeEmptyDevices;
- (void)_configureBatteryDeviceView:(id)a0 withBatteryDevice:(id)a1 transitionCoordinator:(id)a2;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (id)_newBatteryDeviceView;
- (void)viewWillLayoutSubviews;

@end

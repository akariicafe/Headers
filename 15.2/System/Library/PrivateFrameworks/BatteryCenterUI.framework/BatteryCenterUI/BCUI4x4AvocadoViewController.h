@interface BCUI4x4AvocadoViewController : BCUIAvocadoViewController

- (BOOL)_includeEmptyDevices;
- (void)viewWillLayoutSubviews;
- (id)_newBatteryDeviceView;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (void)_configureBatteryDeviceView:(id)a0 withBatteryDevice:(id)a1 transitionCoordinator:(id)a2;

@end

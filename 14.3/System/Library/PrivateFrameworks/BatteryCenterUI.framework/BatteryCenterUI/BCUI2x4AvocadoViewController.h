@interface BCUI2x4AvocadoViewController : BCUIAvocadoViewController

- (void)viewWillLayoutSubviews;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (BOOL)_includeEmptyDevices;
- (id)_newBatteryDeviceView;

@end

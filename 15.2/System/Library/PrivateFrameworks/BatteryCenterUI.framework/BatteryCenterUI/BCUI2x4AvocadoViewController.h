@interface BCUI2x4AvocadoViewController : BCUIAvocadoViewController

- (BOOL)_includeEmptyDevices;
- (void)viewWillLayoutSubviews;
- (id)_newBatteryDeviceView;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;

@end

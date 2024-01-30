@interface BCUI2x4AvocadoViewController : BCUIAvocadoViewController

- (BOOL)_includeEmptyDevices;
- (unsigned long long)_maximumNumberOfBatteryDeviceViews;
- (id)_newBatteryDeviceView;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (double)_columnWidthForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andMaxNumViews:(double)a1;

@end

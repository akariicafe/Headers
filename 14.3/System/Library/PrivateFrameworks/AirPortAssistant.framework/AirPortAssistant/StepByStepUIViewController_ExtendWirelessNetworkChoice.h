@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    int _selectorChoice;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)stepByStepUpdateProgress:(id)a0 forState:(int)a1;
- (void)touchInCellAtIndexPath:(id)a0;
- (void)setupHeaderAndFooter;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;
- (BOOL)canBeExtendedWithDWDS;
- (void)addBrowsedRecords:(id)a0 toDestList:(id)a1;

@end

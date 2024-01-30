@interface StepByStepUIViewController_ReplaceNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker>

- (void)setupHeaderAndFooter;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)prepareParams;
- (void)updateNavigationButtons;

@end

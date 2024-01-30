@class NSString;

@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    NSString *connectionType;
    NSString *unlocalizedStatusString;
    BOOL isReallyJoin;
}

@property (retain, nonatomic) NSString *personalizedBaseName;

- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)shouldChangeTextField:(id)a0 atIndexPath:(id)a1 forTextIndex:(unsigned long long)a2 toString:(id)a3;
- (void)validateAndUpdateNextButton;
- (void)setupAndShowEditableBaseStationName;
- (void)setupHeaderAndFooter;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)primaryActionSelected:(BOOL)a0;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;

@end

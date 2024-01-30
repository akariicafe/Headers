@class NSString;

@interface StepByStepUIViewController_Join_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    unsigned int productID;
    int deviceKind;
    BOOL supportsSpruce;
}

@property (retain, nonatomic) NSString *personalizedBaseName;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)shouldChangeTextField:(id)a0 atIndexPath:(id)a1 forTextIndex:(unsigned long long)a2 toString:(id)a3;
- (void)textFieldDidChangeAtIndexPath:(id)a0;
- (void)syncTopoUIForTarget:(id)a0 andSource:(id)a1 andNetwork:(id)a2 connectionType:(id)a3;
- (void)setupTable;
- (void)validateAndUpdateNextButton;
- (void)setupHeaderAndFooter;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)primaryActionSelected:(BOOL)a0;
- (void)prepareParams;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;
- (BOOL)shouldEnableNextButton;
- (void)setupEditableBaseStationName;
- (BOOL)showMoreOptions;

@end

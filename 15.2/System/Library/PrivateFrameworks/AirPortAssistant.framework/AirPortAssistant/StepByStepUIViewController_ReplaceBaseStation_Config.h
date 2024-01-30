@class NSString, UILabel, UIView;

@interface StepByStepUIViewController_ReplaceBaseStation_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    UILabel *justTextLabel2;
}

@property (retain, nonatomic) UIView *justTextContainerView2;
@property (retain, nonatomic) NSString *personalizedBaseName;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)dealloc;
- (BOOL)shouldChangeTextField:(id)a0 atIndexPath:(id)a1 forTextIndex:(unsigned long long)a2 toString:(id)a3;
- (void)validateAndUpdateNextButton;
- (void)setupHeaderAndFooter;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)primaryActionSelected:(BOOL)a0;
- (void)prepareParams;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;
- (void)setupEditableBaseStationName;

@end

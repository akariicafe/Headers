@class NSString;

@interface StepByStepUIViewController_Create_Guest : StepByStepUIViewController <TableViewManagerDelegate>

@property (copy, nonatomic) NSString *wifiName;
@property (copy, nonatomic) NSString *wifiPassword;
@property (nonatomic) BOOL guestNetworkEnabled;
@property (nonatomic) int guestNetSecMode;

- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldChangeTextField:(id)a0 atIndexPath:(id)a1 forTextIndex:(unsigned long long)a2 toString:(id)a3;
- (void)switchTouchedInCellAtIndexPath:(id)a0 forSwitchIndex:(unsigned long long)a1 isOn:(BOOL)a2;
- (void)textFieldDidChangeAtIndexPath:(id)a0;
- (void)setupInitialTableHeaderConfiguration;
- (void)setupTable;
- (void)updateTable;
- (void)validateAndUpdateNextButton;
- (BOOL)validateAndSetValues;
- (void)addGuestNetworkIsEnabledSection;
- (void)addGuestNetworkPasswordSection;

@end

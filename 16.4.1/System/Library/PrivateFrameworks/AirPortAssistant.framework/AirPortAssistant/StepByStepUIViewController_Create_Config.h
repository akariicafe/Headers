@class NSString, RecommendationActionController;

@interface StepByStepUIViewController_Create_Config : StepByStepUIViewController <TableViewManagerDelegate, UIPopoverControllerDelegate>

@property (copy, nonatomic) NSString *wifiName;
@property (copy, nonatomic) NSString *personalizedBaseName;
@property (copy, nonatomic) NSString *basePassword;
@property (copy, nonatomic) NSString *basePasswordVerify;
@property (copy, nonatomic) NSString *wifiPassword;
@property (copy, nonatomic) NSString *wifiPasswordVerify;
@property (copy, nonatomic) NSString *diskPassword;
@property (copy, nonatomic) NSString *diskPasswordVerify;
@property (nonatomic) BOOL useSinglePassword;
@property (nonatomic) BOOL hasDisk;
@property (nonatomic) BOOL useDifferentDiskPassword;
@property (retain, nonatomic) RecommendationActionController *actionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)updateTableForMultiplePasswords;
- (void)addDiskPasswordSection;
- (void)setupInitialTableHeaderConfiguration;
- (void)setupTable;
- (BOOL)shouldChangeTextField:(id)a0 atIndexPath:(id)a1 forTextIndex:(unsigned long long)a2 toString:(id)a3;
- (void)switchTouchedInCellAtIndexPath:(id)a0 forSwitchIndex:(unsigned long long)a1 isOn:(BOOL)a2;
- (void)textFieldDidChangeAtIndexPath:(id)a0;
- (void)touchInCellAtIndexPath:(id)a0;
- (void)updateSinglePasswordSwitchExplanation:(BOOL)a0;
- (void)updateTable;
- (void)updateTableForSinglePassword;
- (BOOL)validateAndSetValues;
- (void)validateAndUpdateNextButton;

@end

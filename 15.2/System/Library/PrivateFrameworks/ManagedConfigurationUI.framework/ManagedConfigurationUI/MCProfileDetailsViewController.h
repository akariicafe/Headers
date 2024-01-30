@class NSArray, MCUIProfile, NSString;

@interface MCProfileDetailsViewController : MCUITableViewController

@property (retain, nonatomic) MCUIProfile *UIProfile;
@property (nonatomic) BOOL showTitleIfOnlyOneSection;
@property (nonatomic) BOOL viewControllerCanPop;
@property (nonatomic) BOOL shouldShowWarningText;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) int mode;
@property (nonatomic) double tableViewBottomInset;
@property (copy, nonatomic) NSString *tableTitle;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_setup;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_doneButtonTapped:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_profileChanged:(id)a0;
- (void)reloadSectionArray;
- (void)_updateStateForCurrentMode;
- (void)setProfileDetailsMode:(int)a0;
- (void)setUIProfile:(id)a0 mode:(int)a1;

@end

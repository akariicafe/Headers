@class NSArray, MCUIProfile;

@interface MCProfileDetailsViewController : MCUITableViewController

@property (retain, nonatomic) MCUIProfile *UIProfile;
@property (nonatomic) BOOL showTitleIfOnlyOneSection;
@property (nonatomic) BOOL viewControllerCanPop;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) int mode;
@property (nonatomic) double tableViewBottomInset;

- (void)_setup;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_profileChanged:(id)a0;
- (void)_updateStateForCurrentMode;
- (void)setProfileDetailsMode:(int)a0;
- (void)reloadSectionArray;
- (void)setUIProfile:(id)a0 mode:(int)a1;

@end

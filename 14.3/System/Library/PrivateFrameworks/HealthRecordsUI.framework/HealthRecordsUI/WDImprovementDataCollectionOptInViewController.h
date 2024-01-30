@class UITableView, NSArray, HRProfile, NSString, UIView, UIButton;

@interface WDImprovementDataCollectionOptInViewController : HKViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) UIButton *allowButton;
@property (retain, nonatomic) UIButton *doNotAllowButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) HRProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)allowButtonTapped:(id)a0;
- (void)doNotAllowButtonTapped:(id)a0;
- (void)aboutPrivacyButtonTapped:(id)a0;
- (void)_setOptInStatus:(long long)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)cancelButtonTapped:(id)a0;
- (void)_setupSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_setupConstraints;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)_computeSections;
- (void)viewDidLoad;

@end

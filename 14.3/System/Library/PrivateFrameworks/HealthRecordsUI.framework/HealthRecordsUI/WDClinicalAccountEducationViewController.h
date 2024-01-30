@class HRProfile, NSArray, UITableView, NSString, UIView, HKClinicalAccount, UIButton;

@interface WDClinicalAccountEducationViewController : HKViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) HRProfile *profile;
@property (readonly, copy, nonatomic) HKClinicalAccount *account;
@property (nonatomic) BOOL promptForDataCollection;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *footerView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)updateNextButton;
- (void)loadView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupSubviews;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_setupConstraints;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)fetchShouldPromptForDataCollection;
- (void)_navigationAction:(id)a0;
- (void)_computeSections;
- (id)initWithProfile:(id)a0 account:(id)a1;
- (void)viewDidLoad;

@end

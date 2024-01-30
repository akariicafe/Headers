@class UIButton;

@interface CBSPaneViewController : CBSTableViewController

@property (retain, nonatomic) UIButton *primaryButton;
@property (retain, nonatomic) UIButton *secondaryButton;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)primaryButtonTapped:(id)a0;
- (void)secondaryButtonTapped:(id)a0;
- (id)primaryButtonText;
- (id)secondaryButtonText;
- (void)_setupPrimaryButton;
- (void)_setupSecondaryButton;

@end

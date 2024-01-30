@class UIButton;

@interface CBSPaneViewController : CBSTableViewController

@property (retain, nonatomic) UIButton *primaryButton;
@property (retain, nonatomic) UIButton *secondaryButton;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)primaryButtonText;
- (void)_setupPrimaryButton;
- (void)_setupSecondaryButton;
- (void)primaryButtonTapped:(id)a0;
- (id)secondaryButtonText;
- (void)secondaryButtonTapped:(id)a0;

@end

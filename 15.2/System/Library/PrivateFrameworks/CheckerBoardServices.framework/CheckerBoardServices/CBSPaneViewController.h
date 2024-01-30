@class UIButton;

@interface CBSPaneViewController : CBSTableViewController

@property (retain, nonatomic) UIButton *primaryButton;
@property (retain, nonatomic) UIButton *secondaryButton;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)primaryButtonText;
- (void)_setupPrimaryButton;
- (void)_setupSecondaryButton;
- (void)primaryButtonTapped:(id)a0;
- (id)secondaryButtonText;
- (void)secondaryButtonTapped:(id)a0;

@end

@class STNoUsageReportedGroupSpecifierProvider, STScreenTimeGroupSpecifierProvider, STEnableScreenTimeGroupSpecifierProvider;

@interface STRootViewController : STPINListViewController

@property (readonly) STEnableScreenTimeGroupSpecifierProvider *enableScreenTimeGroupSpecifierProvider;
@property (readonly) STNoUsageReportedGroupSpecifierProvider *noUsageReportedGroupSpecifierProvider;
@property (readonly) STScreenTimeGroupSpecifierProvider *screenTimeGroupSpecifierProvider;
@property (nonatomic) BOOL shouldRefreshUsageData;
@property (readonly, nonatomic) BOOL presentedAsModal;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithRootViewModelCoordinator:(id)a0;
- (id)initWithRootViewModelCoordinator:(id)a0 presentedAsModal:(BOOL)a1;
- (void)_startObservingCoordinator;
- (void)_stopObservingCoordinator;
- (void)doneButtonAction:(id)a0;

@end

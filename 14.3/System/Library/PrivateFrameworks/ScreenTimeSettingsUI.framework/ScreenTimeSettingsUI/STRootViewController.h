@class STNoUsageReportedGroupSpecifierProvider, STScreenTimeGroupSpecifierProvider, STEnableScreenTimeGroupSpecifierProvider;

@interface STRootViewController : STPINListViewController

@property (readonly) STEnableScreenTimeGroupSpecifierProvider *enableScreenTimeGroupSpecifierProvider;
@property (readonly) STNoUsageReportedGroupSpecifierProvider *noUsageReportedGroupSpecifierProvider;
@property (readonly) STScreenTimeGroupSpecifierProvider *screenTimeGroupSpecifierProvider;
@property (nonatomic) BOOL shouldRefreshUsageData;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithRootViewModelCoordinator:(id)a0;

@end

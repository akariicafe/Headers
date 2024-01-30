@class PKTableHeaderView, NSArray, PKAddPaymentPassRequestConfiguration;
@protocol PKAddPaymentPassDevicePickerDelegate;

@interface PKAddPaymentPassDevicePickerViewController : UITableViewController {
    PKTableHeaderView *_headerView;
    NSArray *_webServices;
    PKAddPaymentPassRequestConfiguration *_configuration;
    BOOL _viewHasAppeared;
    BOOL _sentViewHasAppearedEvent;
}

@property (weak, nonatomic) id<PKAddPaymentPassDevicePickerDelegate> delegate;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithPaymentWebServices:(id)a0 configuration:(id)a1;
- (void)noteNavigationUserInterfaceDidDisappear;
- (void)reloadContentFromWebServices;

@end

@class PKTableHeaderView, PKLinkedAppView, PKPaymentSetupProduct;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentCardUnsupportedViewController : PKPaymentSetupTableViewController {
    PKTableHeaderView *_headerView;
    PKLinkedAppView *_appViewCell;
}

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_done:(id)a0;
- (unsigned long long)edgesForExtendedLayout;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateViewsWithProduct:(id)a0;
- (id)initWithUnsupportedProduct:(id)a0 context:(long long)a1 delegate:(id)a2;

@end

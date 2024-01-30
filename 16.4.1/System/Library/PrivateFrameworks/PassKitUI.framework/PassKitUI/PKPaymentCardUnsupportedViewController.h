@class PKTableHeaderView, PKLinkedAppView, PKPaymentSetupProduct;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentCardUnsupportedViewController : PKPaymentSetupTableViewController {
    PKTableHeaderView *_headerView;
    PKLinkedAppView *_appViewCell;
}

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)edgesForExtendedLayout;
- (void)_done:(id)a0;
- (void)_updateViewsWithProduct:(id)a0;
- (id)initWithUnsupportedProduct:(id)a0 context:(long long)a1 delegate:(id)a2;

@end

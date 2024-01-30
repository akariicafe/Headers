@class NSArray, NSString, PKPaymentSetupProduct, PKTableHeaderView, PKDisambiguationFooterView, UIBarButtonItem;
@protocol PKPaymentSetupDisambiguationViewControllerDelegate;

@interface PKPaymentSetupDisambiguationViewController : PKPaymentSetupTableViewController <UITableViewDelegate> {
    UIBarButtonItem *_nextBarButtonItem;
    PKTableHeaderView *_headerView;
    PKDisambiguationFooterView *_footerView;
}

@property (weak, nonatomic) id<PKPaymentSetupDisambiguationViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *products;
@property (readonly, retain, nonatomic) PKPaymentSetupProduct *selectedProduct;
@property (copy, nonatomic) NSString *enteredCardNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)_nextTapped:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setupHeaderViewForTableView:(id)a0;
- (void)setupFooterViewForTableView:(id)a0;
- (void)_popToCameraCapture:(id)a0;
- (void)_setupLater:(id)a0;
- (id)_productAtIndexPath:(id)a0;
- (void)_updateSelectedProduct:(id)a0;
- (void)_notifyDelegateDidSelectProduct:(id)a0;
- (id)initWithProducts:(id)a0 context:(long long)a1;
- (void)clearSelectedProduct;

@end

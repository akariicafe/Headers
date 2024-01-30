@class NSString, PKPaymentSetupProduct, PKLinkedApplication, PKPaymentSetupBrowseProductsModel, PKPaymentProvisioningController, PKSearchableTableHeaderView;
@protocol PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupBrowseProductsViewController : PKPaymentSetupTableViewController <UITableViewDelegate, UITextFieldDelegate, PKLinkedApplicationObserver, PKPaymentSetupActivitySpinnerProtocol> {
    PKLinkedApplication *_loadingLinkedApplication;
    id<PKPaymentSetupActivitySpinnerProtocol> _loadingLinkedApplicationSpinner;
    PKSearchableTableHeaderView *_headerView;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningController *_provisioningController;
    BOOL _isBridgeContext;
    double _previousHeaderHeight;
}

@property (nonatomic) BOOL showScanCardButton;
@property (retain, nonatomic) PKPaymentSetupBrowseProductsModel *model;
@property (weak, nonatomic) id<PKPaymentSetupBrowseProductsViewControllerDelegate> delegate;
@property (readonly, nonatomic) PKPaymentSetupProduct *selectedProduct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldClear:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (id)defaultHeaderViewTitle;
- (id)defaultHeaderViewSubTitle;
- (id)initWithProducts:(id)a0 context:(long long)a1 provisioningController:(id)a2 setupDelegate:(id)a3;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_setNavigationBarEnabled:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)hideActivitySpinner;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_productAtIndexPath:(id)a0;
- (void)_updateSelectedProduct:(id)a0;
- (id)initWithProducts:(id)a0 likelyProductIdentifiers:(id)a1 context:(long long)a2;
- (id)initWithModel:(id)a0 context:(long long)a1;
- (BOOL)_searchUIEnabled;
- (id)defaultSearchPrompt;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithProducts:(id)a0 context:(long long)a1;
- (void)showActivitySpinner;
- (void)linkedApplicationDidChangeState:(id)a0;
- (void)clearSelectedProduct;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)_showLikelySection;
- (void)_showCameraCapture;
- (void)_notifyDelegateDidSelectProduct:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_nextStepInSetupFlowWithProduct:(id)a0;
- (void)_updateFilterString:(id)a0 userInteraction:(BOOL)a1;
- (void)clearSearchField;
- (id)_cardTypeFlowPickerForProduct:(id)a0;
- (void)_showAppRequiredForProduct:(id)a0 withSpinner:(id)a1;
- (void)_pushAppRequiredViewControllerForProduct:(id)a0 linkedApplication:(id)a1;
- (BOOL)_isLikelySection:(long long)a0;
- (BOOL)_isUnlikelySection:(long long)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_nextTapped:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

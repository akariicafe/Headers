@class UILabel, NSString, NSArray, _PKUIKVisibilityBackdropView, NSDecimalNumber, NSNumberFormatter, UIImageView, UITableView, PKEnterCurrencyAmountPassTableHeaderFooterView, PKAnimatedNavigationBarTitleView, PKPaymentPass, NSDecimalNumberHandler;

@interface PKPeerPaymentActionTransferToBankViewController : PKPeerPaymentActionViewController <_PKUIKVisibilityBackdropViewDelegate, PKPeerPaymentActionControllerDelegate, UITableViewDelegate, UITableViewDataSource, PKEnterCurrencyAmountPassViewDelegate> {
    NSArray *_supportedTransferActions;
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_percentageFormatter;
    NSDecimalNumberHandler *_roundingHandler;
    PKPaymentPass *_defaultInstantFundsOutPaymentPass;
    BOOL _isSmallPhone;
    BOOL _usesAccessibilityLayout;
    PKAnimatedNavigationBarTitleView *_passNavbarTitleView;
    UITableView *_tableView;
    UIImageView *_navbarPassView;
    _PKUIKVisibilityBackdropView *_backdropView;
    UILabel *_footerTextLabel;
    PKEnterCurrencyAmountPassTableHeaderFooterView *_tableHeaderView;
    NSDecimalNumber *_feePercentage;
    NSDecimalNumber *_minimumFee;
    NSDecimalNumber *_maximumFee;
    double _backdropWeight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)a0;
- (void).cxx_destruct;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)_amountPassView;
- (id)initWithPaymentPass:(id)a0 webService:(id)a1 passLibraryDataProvider:(id)a2 context:(long long)a3;
- (void)updateAccountValues;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)peerPaymentActionController:(id)a0 hasChangedState:(unsigned long long)a1;
- (void)dealloc;
- (void)setMinBalance:(id)a0;
- (void)loadView;
- (id)_defaultInstantFundsOutPaymentPass;
- (id)_transferBarButton;
- (BOOL)_passViewInNavBar;
- (void)_updateFooterText;
- (void)_updateTableHeaderHeight;
- (id)_calculateFee;
- (id)_detailTextForAction:(unsigned long long)a0;
- (id)_indexPathForAction:(unsigned long long)a0;
- (void)_transferBarButtonPressed:(id)a0;
- (void)_dismissViewController:(id)a0;
- (id)_spinnerBarButton;
- (void)setMaxBalance:(id)a0;
- (void)setMinLoadAmount:(id)a0;
- (void)setMaxLoadAmount:(id)a0;
- (void)setCardBalance:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_showNavigationBarSpinner:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_calculateBlur;
- (void)_updateCurrentAmount:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (void)_updateBarButtonEnabledState;
- (void)_currentAmountDidChangeTo:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (BOOL)_isCurrentAmountValid;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;

@end

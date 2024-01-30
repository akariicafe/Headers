@class PKPaymentPass, PKRetrieveMerchantTokensResponse, NSMutableArray, PKPaymentWebService;

@interface PKMerchantTokensViewController : UITableViewController {
    PKPaymentPass *_pass;
    PKRetrieveMerchantTokensResponse *_previousMerchantTokensResponse;
    NSMutableArray *_merchantTokens;
    BOOL _isFetchingMerchantTokens;
    PKPaymentWebService *_webService;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_fetchNextPageOfMerchantTokens;
- (BOOL)_shouldShowLoadingRow;
- (BOOL)_isMerchantRow:(id)a0;
- (BOOL)_isLoadingRow:(id)a0;
- (BOOL)_hasMoreUnfetchedMerchantTokens;
- (id)initWithPass:(id)a0 merchantTokensResponse:(id)a1;

@end

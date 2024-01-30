@class NSDictionary, PKPaymentTransaction, UITableViewCell;

@interface PKTransactionDebugDetailsViewController : UITableViewController {
    PKPaymentTransaction *_transaction;
    UITableViewCell *_mapsCell;
    BOOL _inBridge;
}

@property (retain, nonatomic) NSDictionary *transactionDetails;
@property (retain, nonatomic) NSDictionary *merchantDetails;
@property (copy, nonatomic) NSDictionary *mapsMerchantDetails;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithTransaction:(id)a0;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)_cellWithPrimaryText:(id)a0 infoText:(id)a1;
- (void)_didSelectMap;
- (id)_mapsBrandInfoCellForIndex:(long long)a0;
- (id)_mapsCell;
- (id)_mapsMerchantInfoCellForIndex:(long long)a0;
- (id)_merchantInfoCellForIndex:(long long)a0;
- (id)_stringForTechnologyType:(long long)a0;
- (id)_stringForTransactionSource:(unsigned long long)a0;
- (id)_stringForTransactionStatus:(long long)a0;
- (id)_stringForTransactionType:(long long)a0;
- (id)_transactionInfoCellForIndex:(long long)a0;
- (id)mapsBrandDetails;

@end

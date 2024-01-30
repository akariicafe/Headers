@class NSDictionary, PKPaymentTransaction, UITableViewCell;

@interface PKTransactionDebugDetailsViewController : UITableViewController {
    PKPaymentTransaction *_transaction;
    UITableViewCell *_mapsCell;
    BOOL _inBridge;
}

@property (retain, nonatomic) NSDictionary *transactionDetails;
@property (retain, nonatomic) NSDictionary *merchantDetails;
@property (copy, nonatomic) NSDictionary *mapsMerchantDetails;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithTransaction:(id)a0;
- (void).cxx_destruct;
- (id)mapsBrandDetails;
- (id)_transactionInfoCellForIndex:(long long)a0;
- (id)_merchantInfoCellForIndex:(long long)a0;
- (id)_mapsMerchantInfoCellForIndex:(long long)a0;
- (id)_mapsBrandInfoCellForIndex:(long long)a0;
- (void)_didSelectMap;
- (id)_stringForTransactionStatus:(long long)a0;
- (id)_mapsCell;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)_stringForTransactionType:(long long)a0;
- (id)_stringForTechnologyType:(long long)a0;
- (id)_stringForTransactionSource:(unsigned long long)a0;
- (id)_cellWithPrimaryText:(id)a0 infoText:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end

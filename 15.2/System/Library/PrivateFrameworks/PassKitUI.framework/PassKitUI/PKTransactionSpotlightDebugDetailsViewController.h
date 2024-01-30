@class NSMutableArray, NSMutableDictionary, CSSearchableItem, PKSearchService, PKPaymentTransaction, NSError;

@interface PKTransactionSpotlightDebugDetailsViewController : UITableViewController {
    PKPaymentTransaction *_transaction;
    PKSearchService *_searchService;
    BOOL _loading;
    BOOL _inBridge;
    NSError *_error;
    NSMutableArray *_attributes;
    NSMutableDictionary *_attributesPerKey;
    NSMutableArray *_customAttributes;
    NSMutableDictionary *_customAttributesPerKey;
    CSSearchableItem *_item;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)spotlightObjectDescriptionWithCompletion:(id /* block */)a0;
- (void)loadItemWithCompletion:(id /* block */)a0;
- (id)_cellWithTitleText:(id)a0 valueText:(id)a1;

@end

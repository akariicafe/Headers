@class PKCloudStoreService, NSArray, NSMutableDictionary, NSMutableSet, PKPaymentTransaction, PKCloudRecordObject;

@interface PKTransactionCloudKitDebugDetailsViewController : UITableViewController {
    PKCloudRecordObject *_cloudRecordObject;
    NSArray *_records;
    PKPaymentTransaction *_transaction;
    PKCloudStoreService *_cloudStoreService;
    BOOL _loadingCloudRecordObject;
    BOOL _inBridge;
    NSMutableDictionary *_keysForRecordName;
    NSMutableDictionary *_valuesForRecordName;
    NSMutableSet *_cloudStoreObjectHandlers;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)cloudRecordObjectDescriptionWithCompletion:(id /* block */)a0;
- (id)_cellWithTitleText:(id)a0 valueText:(id)a1;
- (void)_loadCloudData;
- (id)_recordNameForSection:(long long)a0;
- (id)_recordForSection:(long long)a0;
- (void)_processCloudRecords;
- (void)_callCloudRecordObjectDescriptionBlocks;

@end

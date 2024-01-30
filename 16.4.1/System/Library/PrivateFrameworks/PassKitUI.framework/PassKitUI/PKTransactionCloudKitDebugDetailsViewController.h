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

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithTransaction:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_callCloudRecordObjectDescriptionBlocks;
- (id)_cellWithTitleText:(id)a0 valueText:(id)a1;
- (void)_loadCloudData;
- (void)_processCloudRecords;
- (id)_recordForSection:(long long)a0;
- (id)_recordNameForSection:(long long)a0;
- (void)cloudRecordObjectDescriptionWithCompletion:(id /* block */)a0;

@end

@class NSString, PKPaymentService, PKTransactionReceipt, QLItem, PKPaymentTransaction, QLPreviewController;

@interface PKTransactionReceiptDebugViewController : PKSectionTableViewController <PKPaymentServiceDelegate, QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource> {
    PKPaymentService *_paymentService;
    PKPaymentTransaction *_transaction;
    PKTransactionReceipt *_receipt;
    QLItem *_receiptPreviewItem;
    QLPreviewController *_previewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (id)provideDataForItem:(id)a0;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)transactionWithIdentifier:(id)a0 didDownloadTransactionReceipt:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)initWithPaymentTransaction:(id)a0;
- (id)_infoCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_headerFieldCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_lineItemCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_summaryItemCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_amountCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_previewCellForTableView:(id)a0 atIndexPath:(id)a1;
- (void)_presentReceiptPreview;

@end

@class SUDocumentInteractionSession;

@interface SUItemTableViewController : SUTableViewController {
    SUDocumentInteractionSession *_documentInteractionSession;
}

- (void)reloadData;
- (id)itemAtIndexPath:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (void)_restrictionsChangedNotification:(id)a0;
- (void)_touchCaptureAction:(id)a0;
- (void)itemOfferButtonAction:(id)a0;
- (void)_purchasedItemSetChangedNotification:(id)a0;
- (void)_removeTouchCaptureView;
- (void)_showPurchaseConfirmationForButton:(id)a0;
- (void)_hidePurchaseConfirmationForButton:(id)a0;
- (BOOL)openDocumentForItemAtIndexPath:(id)a0 withApplication:(id)a1;
- (void)_chooseApplicationToOpenDocumentAtIndexPath:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)purchaseItemAtIndexPath:(id)a0;
- (id)_preferredApplicationFromCandidates:(id)a0;
- (void)_promptToOpenUTI:(id)a0 fromIndexPath:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_tableCellForButton:(id)a0;

@end

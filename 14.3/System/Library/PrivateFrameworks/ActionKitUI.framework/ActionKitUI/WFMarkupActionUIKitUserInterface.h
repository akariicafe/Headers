@class NSArray, NSMapTable, NSString;

@interface WFMarkupActionUIKitUserInterface : WFActionUserInterface <QLPreviewControllerDataSource, QLPreviewControllerDelegate, WFMarkupActionUserInterface>

@property (retain, nonatomic) NSArray *previewItems;
@property (retain, nonatomic) NSMapTable *editedPreviewItems;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)editedItems;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (void)previewControllerDidDismiss:(id)a0;
- (long long)previewController:(id)a0 editingModeForPreviewItem:(id)a1;
- (void)previewController:(id)a0 didSaveEditedCopyOfPreviewItem:(id)a1 atURL:(id)a2;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithPreviewItems:(id)a0 completionHandler:(id /* block */)a1;

@end

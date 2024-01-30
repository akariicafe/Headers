@class NSString, UICreatePDFActivityItem, QLPreviewController;

@interface UICreatePDFActivity : UIPrintActivity <QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIDocumentPickerDelegate>

@property (retain, nonatomic) QLPreviewController *previewController;
@property (retain, nonatomic) UICreatePDFActivityItem *previewURLItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)_cleanup;
- (id)_embeddedActivityViewController;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (void)_setupQuickLookWithURL:(id)a0 activityItems:(id)a1 isPreview:(BOOL)a2;
- (BOOL)previewController:(id)a0 canEditItem:(id)a1;
- (BOOL)previewController:(id)a0 shouldSaveEditedItem:(id)a1;
- (id)excludedActivityTypesForPreviewController:(id)a0;
- (BOOL)shouldAppendDefaultDismissActionsForPreviewController:(id)a0;
- (BOOL)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)a0;
- (id)dismissActionsForPreviewController:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (void)previewControllerDidDismiss:(id)a0;

@end

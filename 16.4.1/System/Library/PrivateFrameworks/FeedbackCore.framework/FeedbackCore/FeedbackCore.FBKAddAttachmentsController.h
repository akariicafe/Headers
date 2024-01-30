@interface FeedbackCore.FBKAddAttachmentsController : NSObject <UIDocumentPickerDelegate, UITableViewDropDelegate> {
    void /* unknown type, empty encoding */ attachmentDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_temporaryDirectory;
}

+ (void)handleErrorAttachingWithAttachment:(id)a0 viewController:(id)a1 devicesDiagnosticsController:(id)a2 error:(id)a3;

- (BOOL)tableView:(id)a0 canHandleDropSession:(id)a1;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (id)tableView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)tableView:(id)a0 performDropWithCoordinator:(id)a1;
- (void)getFilesFromFileProviderBeforeTheyDisappearWithCoordinator:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)menuForController:(id)a0;
- (id)sheetForController:(id)a0 selectedIndexPath:(id)a1 sender:(id)a2;

@end

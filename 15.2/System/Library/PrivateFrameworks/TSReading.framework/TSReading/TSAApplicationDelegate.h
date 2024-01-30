@interface TSAApplicationDelegate : TSABaseApplicationDelegate

@property (copy, nonatomic) id /* block */ alertCompletionBlock;
@property (getter=isInBackground) BOOL inBackground;
@property (getter=isActivating) BOOL activating;
@property (getter=isTerminating) BOOL terminating;
@property BOOL hasNotifiedEnterBackground;

+ (id)sharedDelegate;

- (void)applicationDidReceiveMemoryWarning:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)centerOnInitialSelection;
- (void)persistenceError:(id)a0;
- (id)previewImageNameForDocumentType:(id)a0;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)noDocumentsImagePath;
- (id)image32IconForTXTFiles;
- (id)stringForImportingDocument;

@end

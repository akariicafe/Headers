@class NSObject, SFUCryptoKey, NSString, TSPObjectContext, TIADocumentInfo, NSURL, TSADocumentRoot;
@protocol NSFilePresenter, OS_dispatch_queue, TIADocumentPassphraseDelegate;

@interface TIADocument : UIDocument <TSADocumentRootDelegate, TSKDocumentRootProvider, TSPObjectContextDelegate> {
    int _hasPersistenceErrors;
    TSADocumentRoot *_documentRootForDocumentDidLoad;
    TSADocumentRoot *_suspendedDocumentRoot;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_ioOperationQueue;
    id _documentStateChangedObserver;
}

@property (retain, nonatomic) TSPObjectContext *context;
@property (retain, nonatomic) TSPObjectContext *contextForRevert;
@property (retain, nonatomic) TIADocumentInfo *documentInfo;
@property (copy, nonatomic) NSURL *templateURL;
@property (retain, nonatomic) SFUCryptoKey *encryptionKey;
@property BOOL isReadOnly;
@property BOOL isClosingWithoutSaving;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly) BOOL passwordEntryWasAbandoned;
@property (readonly) BOOL documentNeedsDownloadOnRevert;
@property (readonly) BOOL documentRevertWasAbandoned;
@property (readonly) BOOL shouldHideForSnapshots;
@property (readonly, retain, nonatomic) TSADocumentRoot *documentRoot;
@property (readonly) BOOL isShowingConflictResolutionSheet;
@property (readonly) BOOL hasPersistenceErrors;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (copy, nonatomic) NSString *documentPasswordHint;
@property (nonatomic) id<TIADocumentPassphraseDelegate> passphraseDelegate;
@property (retain, nonatomic) NSString *sourcePathForNondestructiveImport;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *defaultDraftName;
@property (readonly, nonatomic) NSString *documentCachePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSFilePresenter> filePresenter;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;

- (void)closeWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (BOOL)hasUnsavedChanges;
- (id)contentsForType:(id)a0 error:(id *)a1;
- (void)documentDidLoad;
- (void)setEncryptionKeyWithPassphrase:(id)a0;
- (BOOL)_shouldPreventFileProtectionUpgradeToLevel:(id)a0;
- (id)additionalDocumentPropertiesForWrite;
- (void)context:(id)a0 didDownloadDocumentResources:(id)a1 failedOrCancelledDocumentResources:(id)a2 error:(id)a3;
- (void)coordinatedReadUsingAccessor:(id /* block */)a0;
- (void)decryptedDocumentWithKey:(id)a0;
- (id)documentUUID;
- (id)initWithTemporaryFileURL:(id)a0;
- (id)newExporterForType:(id)a0 options:(id)a1 preferredType:(id *)a2;
- (void)p_performSynchronousBlockOnMainThread:(id /* block */)a0;
- (id)packageDataForWrite;
- (void)passwordStateDidChange;
- (id)persistenceWarningsForData:(id)a0 isReadable:(BOOL)a1 isExternal:(BOOL)a2;
- (void)setDocumentFileProtectionTo:(id)a0;
- (void)setFileProtectionTo:(id)a0 atPath:(id)a1;
- (BOOL)shouldAbandonDocumentRevert;
- (BOOL)validatePassphrase:(id)a0;

@end

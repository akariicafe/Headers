@class NSString, HDProfile, NSURL, NSMutableDictionary;

@interface HDAttachmentManager : NSObject <HDProfileReadyObserver, HDAnalyticsSubmissionCoordinatorDelegate> {
    HDProfile *_profile;
    NSMutableDictionary *_schemaProvidersByIdentifier;
    NSString *_filesDirectoryPath;
    NSString *_unconfirmedFilesDirectoryPath;
}

@property (copy, nonatomic) id /* block */ unitTestdidCompleteFileCleanup;
@property (readonly, copy, nonatomic) NSURL *filesDirectoryURL;
@property (readonly, copy, nonatomic) NSURL *unconfirmedFilesDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (BOOL)attachmentReferencesForObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (id)schemaProviderForIdentifier:(id)a0;
- (BOOL)insertAttachmentReferences:(id)a0 attachment:(id)a1 error:(id *)a2;
- (BOOL)readAuthorizationForObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 client:(id)a2 error:(id *)a3;
- (BOOL)writeAuthorizationForObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 client:(id)a2 error:(id *)a3;
- (BOOL)insertAttachmentReferences:(id)a0 attachment:(id)a1 fileHandle:(id)a2 encrypt:(BOOL)a3 error:(id *)a4;
- (void)removeAllReferencesWithAttachmentIdentifier:(id)a0 objectIdentifier:(id)a1 schemaIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)schemaProviderClasses;
- (void)addReferenceWithAttachment:(id)a0 toObjectWithIdentifier:(id)a1 schemaIdentifier:(id)a2 metadata:(id)a3 completion:(id /* block */)a4;
- (void)_addReferenceWithAttachment:(id)a0 toObjectWithIdentifier:(id)a1 schemaIdentifier:(id)a2 metadata:(id)a3 completion:(id /* block */)a4;
- (BOOL)removeAttachmentReferences:(id)a0 error:(id *)a1;
- (void)runMaintenanceOperationIfNeeded;
- (void)dealloc;
- (void)addAttachmentWithName:(id)a0 contentTypeIdentifier:(id)a1 fileHandle:(id)a2 toObjectWithIdentifier:(id)a3 schemaIdentifier:(id)a4 attachmentMetadata:(id)a5 referenceMetadata:(id)a6 completion:(id /* block */)a7;
- (BOOL)replaceReferencesWithObjectIdentifier:(id)a0 replacementIdentifier:(id)a1 schemaIdentifier:(id)a2 error:(id *)a3;
- (id)readerForAttachment:(id)a0 error:(id *)a1;
- (id)fileHandleForAttachment:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)removeAttachmentReferencesWithObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 error:(id *)a2;
- (BOOL)attachmentReferencesForAttachment:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (BOOL)removeAttachmentReferencesWithObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 transaction:(id)a2 error:(id *)a3;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (void)_cleanupAttachmentsFolder;
- (BOOL)insertAttachmentReferences:(id)a0 attachment:(id)a1 fileData:(id)a2 encrypt:(BOOL)a3 error:(id *)a4;
- (void).cxx_destruct;

@end

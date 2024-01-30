@class PLClientServerTransaction, NSXPCConnection;

@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest {
    PLClientServerTransaction *_serverTransaction;
    long long _placeholderCreationMode;
}

@property (readonly, weak, nonatomic) NSXPCConnection *clientConnection;

- (void).cxx_destruct;
- (void)changeFailedOnDaemonWithLibrary:(id)a0 error:(id)a1;
- (id)initForNewObjectWithUUID:(id)a0;
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)a0 inPhotoLibrary:(id)a1 error:(id *)a2;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)a0;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)changeFailedOnClientWithLibrary:(id)a0 error:(id)a1;
- (void)_updateManagedAssetAfterResourceDownload:(id)a0;
- (void)_setDestinationAssetAvailabilityHandler:(id /* block */)a0;
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType:(id)a0;

@end

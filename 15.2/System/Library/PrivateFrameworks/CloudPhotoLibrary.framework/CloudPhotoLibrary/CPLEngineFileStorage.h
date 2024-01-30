@class NSString, CPLPlatformObject, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject> {
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_logDomain;
    NSURL *_crashMarkerURL;
    NSMutableArray *_uncommittedFiles;
    BOOL _trackAllStoresAndDeletesUntilEndOfTransaction;
    BOOL _shouldResetPlatformTrackAllStoresAndDeletes;
}

@property (nonatomic) BOOL keepOriginals;
@property (nonatomic) BOOL deleteImmediately;
@property (nonatomic) BOOL trackAllStoresAndDeletes;
@property (nonatomic) BOOL trackAllStoresAndDeletesUntilEndOfTransaction;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformImplementationProtocol;

- (void)writeTransactionDidSucceed;
- (BOOL)closeWithError:(id *)a0;
- (void)writeTransactionDidFail;
- (BOOL)storeUnretainedData:(id)a0 identity:(id)a1 isOriginal:(BOOL)a2 error:(id *)a3;
- (BOOL)doWrite:(id /* block */)a0 error:(id *)a1;
- (id)retainFileURLForIdentity:(id)a0 resourceType:(unsigned long long)a1 error:(id *)a2;
- (id)fileEnumerator;
- (BOOL)discardAllRetainedFileURLsWithError:(id *)a0;
- (BOOL)addDeleteFlagToFileAtURL:(id)a0 error:(id *)a1;
- (BOOL)deleteFileWithIdentity:(id)a0 error:(id *)a1;
- (BOOL)resetWithError:(id *)a0;
- (BOOL)commitFileWithIdentity:(id)a0 error:(id *)a1;
- (void)_removeIdentityFromUncommittedFiles:(id)a0;
- (void)_addIdentityToUncommittedFiles:(id)a0;
- (BOOL)storeFileAtURL:(id)a0 identity:(id)a1 isOriginal:(BOOL)a2 moveIfPossible:(BOOL)a3 needsCommit:(BOOL *)a4 error:(id *)a5;
- (void)doRead:(id /* block */)a0;
- (BOOL)hasCrashMarker;
- (BOOL)deleteFileWithIdentity:(id)a0 includingOriginal:(BOOL)a1 error:(id *)a2;
- (BOOL)hasFileWithIdentity:(id)a0;
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)compactStorageIncludeOriginals:(BOOL)a0 error:(id *)a1;
- (BOOL)storeUnretainedFileAtURL:(id)a0 identity:(id)a1 isOriginal:(BOOL)a2 error:(id *)a3;
- (BOOL)tryToFreeDiskSpace:(unsigned long long)a0 actuallyFreedSpace:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)_fixupIdentity:(id)a0 fileURL:(id)a1 data:(id)a2 error:(id *)a3;
- (BOOL)_recoverFromCrashWithRecoveryHandler:(id /* block */)a0 error:(id *)a1;
- (BOOL)_compactStorageIncludeOriginals:(BOOL)a0 desiredFreeSpace:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)tryToFreeDiskSpace:(unsigned long long)a0 actuallyFreedSpace:(unsigned long long *)a1 includeOriginals:(BOOL)a2 error:(id *)a3;
- (BOOL)openWithRecoveryHandler:(id /* block */)a0 error:(id *)a1;
- (BOOL)releaseFileURL:(id)a0 error:(id *)a1;
- (void)checkFileSizeForIdentity:(id)a0;
- (id)_markerURLForTrackAllStoresAndDeletes;
- (BOOL)checkIsEmpty;
- (id)initWithBaseURL:(id)a0;
- (BOOL)compactStorage:(id *)a0;
- (unsigned long long)countOfUncommittedFiles;
- (BOOL)storeData:(id)a0 identity:(id)a1 isOriginal:(BOOL)a2 needsCommit:(BOOL *)a3 error:(id *)a4;
- (BOOL)discardUncommittedFileWithIdentity:(id)a0 error:(id *)a1;

@end

@class NSURL, NSString, NSObject;
@protocol HDHFDataStoreDelegate, OS_dispatch_queue;

@interface HDHFDataStore : NSObject {
    struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem *__ptr_; struct __shared_weak_count *__cntrl_; } _fileSystem;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct shared_ptr<health::DataStore> { struct DataStore *__ptr_; struct __shared_weak_count *__cntrl_; } _highFrequencyDataStore;
    _Atomic BOOL _invalidated;
    _Atomic BOOL _hasOpenStore;
    NSObject<OS_dispatch_queue> *_openQueue;
    long long _openAttempt;
}

@property (readonly, copy, nonatomic) NSURL *dataStoreURL;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (weak, nonatomic) id<HDHFDataStoreDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *fileSystemPath;
@property (readonly, nonatomic) long long rebuildState;

+ (BOOL)_errorIndicatesCorruption:(id)a0;
+ (BOOL)_shouldRequestRebuildForFailure:(long long)a0 code:(int)a1;
+ (BOOL)_shouldRequestRebuildForError:(id)a0;

- (id)initWithPath:(id)a0;
- (BOOL)_lock_rebuildIfNeeded:(id *)a0;
- (BOOL)_lock_performNextRebuildStepForState:(long long)a0 error:(id *)a1;
- (struct shared_ptr<health::DataStore> { struct DataStore *x0; struct __shared_weak_count *x1; })_lock_highFrequencyDataStoreWithError:(id *)a0;
- (BOOL)_lock_performPostRestoreCleanup:(id *)a0;
- (void).cxx_destruct;
- (void)unitTest_requestRebuild;
- (BOOL)deleteHFDAt:(id)a0 error:(id *)a1;
- (void)unitTest_resetRebuildState;
- (BOOL)_lock_archiveHFD:(id *)a0;
- (void)dealloc;
- (void)_lock_checkForLargeSparseHFD;
- (BOOL)moveHFDAsideWithoutOverwritingFrom:(id)a0 to:(id)a1 error:(id *)a2;
- (void)setRebuildState:(long long)a0;
- (BOOL)_lock_deleteCompressedArchive:(id *)a0;
- (struct shared_ptr<health::DataStore> { struct DataStore *x0; struct __shared_weak_count *x1; })_highFrequencyDataStoreWithError:(id *)a0;
- (BOOL)_lock_restoreHFDFromArchive:(id *)a0;
- (id)_walPathForHFDAtPath:(id)a0;
- (BOOL)_lock_rollCloudSyncOwnerIdentifier:(id *)a0;
- (BOOL)deleteFileAt:(id)a0 error:(id *)a1;
- (BOOL)_requiresRebuildForState:(long long)a0;
- (struct shared_ptr<health::DataStore> { struct DataStore *x0; struct __shared_weak_count *x1; })_lock_primitiveOpenHighFrequencyDataStoreWithError:(id *)a0;
- (BOOL)retryDecompressionAfterError:(id)a0;
- (id /* block */)flushHandlerForInvalidation:(BOOL)a0;
- (id)diagnosticDescription;
- (id)description;
- (id).cxx_construct;
- (BOOL)accessStoreWithError:(id *)a0 block:(id /* block */)a1;
- (id)fileManager;
- (BOOL)_convertExceptionsToError:(id *)a0 inBlock:(id /* block */)a1;
- (void)requestHFDRebuild;
- (BOOL)_lock_prepareForRecovery:(id *)a0;
- (id)writeaheadLogURLForHFDAt:(id)a0;
- (BOOL)discardStoreWithError:(id *)a0;
- (id)initWithPath:(id)a0 fileSystem:(struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem *x0; struct __shared_weak_count *x1; })a1;
- (struct unique_ptr<health::DataStore, std::__1::default_delete<health::DataStore> > { struct __compressed_pair<health::DataStore *, std::__1::default_delete<health::DataStore> > { struct DataStore *x0; } x0; })dataStoreAtURL:(id)a0 filesystem:(const struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem *x0; struct __shared_weak_count *x1; } *)a1 allowCheckpoint:(BOOL)a2 error:(id *)a3;
- (BOOL)_lock_openHighFrequencyDataStoreWithError:(id *)a0;
- (BOOL)moveFileOnlyIfDestinationEmptyFrom:(id)a0 to:(id)a1 error:(id *)a2;

@end

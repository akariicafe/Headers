@class NSError, NSObject, FPDMoveOperation, FPMoveInfo, FPDActionOperationQueue, NSMutableSet, FPDMoveWriter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FPDMoveReader : NSObject <FPCancellable> {
    FPDMoveOperation *_operation;
    FPMoveInfo *_info;
    FPDActionOperationQueue *_moveQueue;
    FPDMoveWriter *_writer;
    BOOL _startedPreflight;
    BOOL _finishedPreflight;
    BOOL _willMaterializeTargetFolder;
    BOOL _isTargetFolderMaterialized;
    unsigned long long _depth;
    NSMutableSet *_cancelledRoots;
    BOOL __cancelled;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _logSection;
    NSObject<OS_dispatch_semaphore> *_clientUnblockSema;
}

@property (copy, nonatomic) id /* block */ rootPreflightCompletionBlock;
@property (copy, nonatomic) id /* block */ preflightCompletionBlock;
@property (copy, nonatomic) id /* block */ startDownloadBlock;
@property (copy, nonatomic) id /* block */ errorBlock;

+ (BOOL)_hasDiskWriterSupportForDomain:(id)a0;

- (void)_finishWithError:(id)a0;
- (BOOL)_isCancelled;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)_run;
- (void)cancel;
- (void)dumpStateTo:(id)a0;
- (void)cancelRoot:(id)a0;
- (id)initWithMoveWriter:(id)a0 operation:(id)a1 queue:(id)a2;
- (void)_t_unblock;
- (void)_progressComputationPreflight:(id)a0 completion:(id /* block */)a1;
- (void)verifyTargetURL:(id /* block */)a0;
- (long long)_fileSizeBitsSupportAtPath:(id)a0;
- (BOOL)_shouldCheckFileSystemBitsForRoot:(id)a0 targetFolderURL:(id)a1;
- (BOOL)_shouldCheckSpaceForRoot:(id)a0 targetFolderURL:(id)a1;
- (BOOL)_isRootCancelled:(id)a0;
- (void)_getSpaceForWriteSize:(long long)a0 atTargetPath:(id)a1 completion:(id /* block */)a2;
- (id)_getTargetFolderFor:(id)a0 root:(id)a1 error:(id *)a2;
- (id)_targetNameForSource:(id)a0;
- (BOOL)_shouldUseDiskWriterToPerformMoveForItem:(id)a0;
- (BOOL)_isSinglePkgCopyForRoot:(id)a0;
- (BOOL)_enqueueItem:(id)a0 forRoot:(id)a1 atomically:(BOOL)a2 useDiskWriter:(BOOL)a3;
- (BOOL)_isSingleMoveForRoot:(id)a0;
- (void)_t_waitForUnblock;
- (void)_bailOutOfRoot:(id)a0;
- (void)_enqueueAtomsForRoot:(id)a0;

@end

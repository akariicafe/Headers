@class FPDCoordinator, FPMoveInfo, FPDActionOperationQueue, NSError, NSMutableDictionary, FPDMoveOperation, NSMutableArray, NSObject, NSObservation;
@protocol FPDMoveWriterExecutor, OS_dispatch_queue;

@interface FPDMoveWriter : NSObject <FPCancellable> {
    FPDActionOperationQueue *_moveQueue;
    id<FPDMoveWriterExecutor> _providerWriter;
    FPDCoordinator *_preemptiveDownloadCoordinator;
    NSMutableArray *_sourceFoldersStack;
    NSMutableArray *_destinationFoldersStack;
    NSMutableDictionary *_errorsByRoot;
    NSMutableDictionary *_progressByRoot;
    id _waitedOnID;
    id /* block */ _waiterBlock;
    BOOL _cancelled;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    unsigned long long _logSection;
    NSObservation *_importProgressObservation;
}

@property (retain, nonatomic) id<FPDMoveWriterExecutor> diskWriter;
@property (readonly, nonatomic) FPMoveInfo *info;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FPDCoordinator *coordinator;
@property (readonly, weak, nonatomic) FPDMoveOperation *operation;
@property (copy, nonatomic) id /* block */ itemCopyProgressBlock;
@property (copy, nonatomic) id /* block */ itemCompletionBlock;
@property (copy, nonatomic) id /* block */ rootCreatedBlock;
@property (copy, nonatomic) id /* block */ rootCompletionBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (void)initialize;
+ (id)acquireDownloadSlotForItem:(id)a0;
+ (void)releaseDownloadSlot:(id)a0;

- (void)cancel;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0;
- (void)cancelRoot:(id)a0;
- (void)start;
- (void)_step;
- (void)failWithError:(id)a0;
- (void)dumpStateTo:(id)a0;
- (id)initWithOperation:(id)a0 queue:(id)a1;
- (void)startDownloadOfItem:(id)a0 shouldMaterializeRecursively:(BOOL)a1;
- (void)setProgress:(id)a0 forRoot:(id)a1;
- (void)performCreateFolder:(id)a0 inside:(id)a1 as:(id)a2 completion:(id /* block */)a3;
- (void)performCopyOfItem:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 completion:(id /* block */)a5;
- (id)waitForResultOfSourceID:(id)a0 root:(id)a1 error:(id *)a2;
- (void)_handleCompletionOfAtom:(id)a0 source:(id)a1 result:(id)a2 error:(id)a3;
- (void)handleCreationForAtom:(id)a0 result:(id)a1;
- (void)performCopyOfItem:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 useDiskWriter:(BOOL)a5 completion:(id /* block */)a6;
- (void)performMoveOfItem:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 useDiskWriter:(BOOL)a5 completion:(id /* block */)a6;
- (void)_performCopyOrMoveOfItem:(id)a0 completion:(id /* block */)a1;
- (void)performMoveOfFolder:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 atomically:(BOOL)a5 useDiskWriter:(BOOL)a6 completion:(id /* block */)a7;
- (void)_unblockWaiterForSourceID:(id)a0 withResult:(id)a1 error:(id)a2;
- (void)_performCopyOrMoveOfFolder:(id)a0 completion:(id /* block */)a1;
- (void)_removeRoot:(id)a0;
- (void)_handleItem:(id)a0 completion:(id /* block */)a1;
- (void)_handleFolder:(id)a0 completion:(id /* block */)a1;
- (void)_handlePostFolder:(id)a0 completion:(id /* block */)a1;
- (void)handleAtom:(id)a0 completion:(id /* block */)a1;
- (id)defaultExecutor;

@end

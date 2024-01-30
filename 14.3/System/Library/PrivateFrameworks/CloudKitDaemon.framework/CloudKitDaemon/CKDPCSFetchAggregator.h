@class CKDClientContext, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CKDPCSFetchAggregator : NSObject

@property (weak, nonatomic) CKDClientContext *context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *opQueue;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSMutableArray *queuedFetches;
@property (retain, nonatomic) NSMutableArray *runningFetches;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic) BOOL skipQueuedFetchCycleDetection;

- (id)initWithContext:(id)a0;
- (void)cancelAllOperations;
- (void)_lockedFetchesAreReady;
- (id)init;
- (void)_lockedRescheduleFetchTimer;
- (void).cxx_destruct;
- (id)_lockedGetQueuedFetchForOperation:(id)a0 ofClass:(Class)a1;
- (void)dealloc;
- (void)requestFetchOfShareWithID:(id)a0 forOperation:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)fetchRequestForExistingOperation:(id)a0 isDependentOnOperation:(id)a1;
- (void)requestFetchOfZoneWithID:(id)a0 forOperation:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_lockedTearDownFetchTimer;
- (void)requestFetchOfRecordWithID:(id)a0 forOperation:(id)a1 withCompletionHandler:(id /* block */)a2;

@end

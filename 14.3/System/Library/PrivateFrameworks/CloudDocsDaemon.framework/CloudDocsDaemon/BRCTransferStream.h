@class BRCDeadlineSource, NSArray, NSString, BRCAccountSession, NSMutableDictionary, NSObject, BRCSyncContext;
@protocol OS_dispatch_group, OS_dispatch_workloop;

@interface BRCTransferStream : NSObject <BRCLifeCycle, BRCSuspendable> {
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    long long _nextFire;
    NSMutableDictionary *_inFlightOpByID;
    BRCDeadlineSource *_schedulingSource;
    NSObject<OS_dispatch_workloop> *_transferWorkloop;
    NSObject<OS_dispatch_group> *_transferBatchRequestWaiter;
    BOOL _isWaitingForTransferBatch;
    BOOL _hasReachedCap;
    _Atomic int _multipleItemsInteractiveSchedulingCount;
}

@property (copy, nonatomic) id /* block */ streamDidBecomeReadyToTransferRecords;
@property (nonatomic) unsigned long long maxCountOfBatchesInFlight;
@property (readonly) NSArray *operations;
@property (readonly, nonatomic) unsigned long long inFlightSize;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)close;
- (void).cxx_destruct;
- (void)_schedule;
- (void)signal;
- (void)resume;
- (void)suspend;
- (void)signalWithDeadline:(long long)a0;
- (double)progressForTransferID:(id)a0 operationID:(id)a1;
- (void)forceSchedulingPendingInteractiveTransfers;
- (void)cancelTransferID:(id)a0 operationID:(id)a1;
- (void)addAliasItem:(id)a0 toTransferWithID:(id)a1 operationID:(id)a2;
- (void)addBatchOperation:(id)a0;
- (void)_scheduleOneBatchWithQoS:(long long)a0;
- (void)_setReachedCap:(BOOL)a0;
- (void)_evaluateCap;
- (void)_addBatchOperation:(id)a0;
- (id)initWithSyncContext:(id)a0 name:(id)a1 scheduler:(id)a2;
- (void)startSchedulingMultipleItemsInteractively;
- (void)endSchedulingMultipleItemsInteractively;

@end

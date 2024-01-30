@class NSMutableArray, NSString, HDSynchronousTaskGroup, HDCloudSyncTarget, HDCloudSyncSessionContext, HDCloudSyncSequenceRecord, NSObject;
@protocol OS_dispatch_queue;

@interface HDCloudSyncPushSequenceOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate, HDSyncSessionDelegate> {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_syncQueue;
    HDSynchronousTaskGroup *_taskGroup;
    HDCloudSyncSessionContext *_sessionContext;
    NSMutableArray *_changeRecordsPendingPush;
    NSMutableArray *_recordsPendingDeletion;
    BOOL _isPerformingRecentRecordRoll;
}

@property (readonly, nonatomic) BOOL hasMadeForwardProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldLogAtOperationStart;

- (void)syncSession:(id)a0 didFinishSuccessfully:(BOOL)a1 error:(id)a2;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequence:(id)a3;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (BOOL)syncSession:(id)a0 didEndTransactionWithError:(id *)a1;
- (void)main;
- (void)syncSession:(id)a0 willSyncAnchorRanges:(id)a1;
- (void).cxx_destruct;
- (void)syncSession:(id)a0 sendChanges:(id)a1 completion:(id /* block */)a2;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)syncSessionWillBegin:(id)a0;

@end

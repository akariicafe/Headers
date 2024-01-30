@class NSMutableArray, NSString, HDCloudSyncTarget, HDCloudSyncSessionContext, HDCloudSyncSequenceRecord, NSObject;
@protocol OS_dispatch_queue;

@interface HDCloudSyncPushSequenceOperation : HDCloudSyncOperation <HDSyncSessionDelegate> {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_syncQueue;
    HDCloudSyncSessionContext *_sessionContext;
    NSMutableArray *_changeRecordsPendingPush;
    NSMutableArray *_recordsPendingDeletion;
}

@property (readonly, nonatomic) BOOL hasMadeForwardProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)syncSession:(id)a0 sendChanges:(id)a1 completion:(id /* block */)a2;
- (void)main;
- (void)syncSessionWillBegin:(id)a0;
- (long long)nextSyncAnchorForEntity:(Class)a0 session:(id)a1 startSyncAnchor:(long long)a2 error:(id *)a3;
- (void)syncSession:(id)a0 didFinishSuccessfully:(BOOL)a1 error:(id)a2;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)_updateStoreRecordProperties;
- (id)_excludedSyncStoresForPush;
- (void)_synthesizeEmptySyncForSession:(id)a0 completion:(id /* block */)a1;
- (BOOL)_prepareLocalSyncAnchorMapForStore:(id)a0 error:(id *)a1;
- (void)_setInitialForwardProgressDateIfNecessary;
- (void)_syncQueue_performSyncWithSession:(id)a0 completion:(id /* block */)a1;
- (int)_protocolVersionForPush;
- (BOOL)_validateArchiveFileHandle:(id)a0 error:(id *)a1;
- (void)_pushRecords:(id)a0 recordIDsToDelete:(id)a1 containerID:(id)a2 completion:(id /* block */)a3;
- (void)_recordForwardProgressDate;
- (BOOL)_lock_finalizeNextChangeRecordForUploadToSession:(id)a0 shouldFreeze:(BOOL)a1 error:(id *)a2;
- (void)_endSyncSessionWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_uploadChangesForSyncSession:(id)a0 isFinalUpload:(BOOL)a1 completion:(id /* block */)a2;
- (id)_estimateSyncEntityClassesWithChangesForSession:(id)a0;
- (void)_finalizePushForSession:(id)a0;
- (BOOL)syncSession:(id)a0 didEndTransactionWithError:(id *)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequence:(id)a3;

@end

@class NSArray, NSString, NSMutableDictionary, NSMutableSet, HDSynchronousTaskGroup;

@interface HDCloudSyncFetchHeaderRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_fetchedRecordIDsByContainerID;
    NSMutableSet *_invalidRecordIDs;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (nonatomic) BOOL fetchSubscriptions;
@property (readonly, copy, nonatomic) NSArray *invalidRecordIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)_startHeaderRecordFetchForContainer:(id)a0 scope:(long long)a1;
- (void)_startHeaderRecordFetchForZones:(id)a0 container:(id)a1 scope:(long long)a2 completion:(id /* block */)a3;
- (void)_receivedLimitExceededError:(id)a0 fetchingRecordsWithIDs:(id)a1 container:(id)a2 scope:(long long)a3 completion:(id /* block */)a4;
- (void)_processFetchedRecords:(id)a0 container:(id)a1 scope:(long long)a2;
- (void)_fetchRecordsWithIDs:(id)a0 container:(id)a1 scope:(long long)a2 completion:(id /* block */)a3;
- (BOOL)_processFetchedRecord:(id)a0 recordClass:(Class)a1 zone:(id)a2 error:(id *)a3;
- (BOOL)_processFetchedRecord:(id)a0 container:(id)a1 scope:(long long)a2 error:(id *)a3;

@end

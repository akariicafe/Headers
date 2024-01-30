@class NSObject, NSString, BCCloudKitController;
@protocol OS_dispatch_queue, BCCloudDataSyncManagerDelegate, BCCloudDataMapper;

@interface BCCloudDataSyncManager : NSObject <BCCloudKitDatabaseObserver>

@property (retain, nonatomic) BCCloudKitController *cloudKitController;
@property (retain, nonatomic) id<BCCloudDataMapper> dataMapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) BOOL processingCloudData;
@property (nonatomic) double backOffInterval;
@property (nonatomic) unsigned long long tooBigBatch;
@property (nonatomic) BOOL serverPushPostponed;
@property (weak, nonatomic) id<BCCloudDataSyncManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_batchFromCloudData:(id)a0;
- (void)_enterDispatchGroup:(id)a0 times:(unsigned long long)a1;
- (void)_fromBatch:(id)a0 getRecordsToSave:(id *)a1 recordIDsToDelete:(id *)a2 buildingMap:(id *)a3;
- (void)_leaveDispatchGroup:(id)a0 times:(unsigned long long)a1;
- (unsigned long long)_maxCloudDataPerBatch;
- (id /* block */)_modifyRecordsCompletionBlockWithDispatchGroup:(id)a0 cloudDataMap:(id)a1 recordCount:(unsigned long long)a2 operation:(id)a3;
- (void)_syncQueueSyncForCloudData:(id)a0 completion:(id /* block */)a1;
- (void)_updateRetryParametersFromModifyRecordsOperationError:(id)a0 batchSize:(unsigned long long)a1;
- (void)databaseController:(id)a0 attachmentChanged:(BOOL)a1;
- (void)databaseController:(id)a0 fetchedAllRecordsInZone:(id)a1;
- (void)databaseController:(id)a0 reachabilityChanged:(BOOL)a1;
- (void)databaseController:(id)a0 recordWithIDWasDeleted:(id)a1 recordType:(id)a2;
- (void)databaseController:(id)a0 recordsChanged:(id)a1;
- (void)fetchRecordForRecordID:(id)a0 completion:(id /* block */)a1;
- (id)initWithCloudKitController:(id)a0;
- (id)initWithCloudKitController:(id)a0 dataMapper:(id)a1;
- (void)signalSyncToCK;
- (void)startSyncToCKWithCompletion:(id /* block */)a0;
- (void)syncCloudData:(id)a0 completion:(id /* block */)a1;

@end

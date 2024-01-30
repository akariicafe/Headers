@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CKUploadRequestPersistentStore : NSObject

@property (readonly, nonatomic) NSURL *databaseURL;
@property (nonatomic) BOOL firstInvocation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)repairRecordToMetadata:(id)a0;

- (id)delayedSyncDateForRecord:(id)a0;
- (void)deleteDatabase;
- (void)setLastFetchDate:(id)a0;
- (id)metadataForRecordName:(id)a0;
- (void)clearDelayedSyncRecords;
- (id)currentUser;
- (void)markRecordNameUnrecoverable:(id)a0;
- (void)deleteDelayedSyncForRecordName:(id)a0;
- (void)persistSyncEngineMetadata:(id)a0;
- (void)clearDatabase;
- (void)readDatabase:(id /* block */)a0 async:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithDatabaseURL:(id)a0;
- (id)syncEngineMetadata;
- (void)deleteRepairRecord:(id)a0;
- (id)allData;
- (void)clearRepairRecords;
- (void)persistDelayedSyncForRecordName:(id)a0 withDate:(id)a1 increasingCount:(BOOL)a2;
- (long long)delayedSyncCountForRecordName:(id)a0;
- (void)readWriteDatabase:(id /* block */)a0 async:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
- (id)delayedSyncRecordNamesBeforeAndIncludingDate:(id)a0;
- (id)lastFetchDate;
- (id)sortedDelayedSyncRecordsForDatabase:(id)a0;
- (void)setCurrentUser:(id)a0;
- (void)persistRepairRecord:(id)a0;
- (id)delayedSyncRecordNamesAfterDate:(id)a0;
- (id)earliestDelayedSyncDateAfterDate:(id)a0;
- (void).cxx_destruct;
- (id)packageRepairMetadata;
- (id)assetRepairMetadata;

@end

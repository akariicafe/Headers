@class CKServerChangeToken, NSMutableDictionary, IMDRecordZoneManager, NSObject;
@protocol OS_dispatch_queue, IMDCKSyncTokenStore;

@interface IMDCKUpdateSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) id<IMDCKSyncTokenStore> syncTokenStore;
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken;
@property (nonatomic) BOOL fetchedChatsDuringLastSync;
@property (retain, nonatomic) NSMutableDictionary *writeMsgIDToRowIDMap;

+ (id)sharedInstance;
+ (id)_fetchUpdatesCKConfiguration:(id)a0;
+ (id)_zoneChangesOptionsDictionaryUsingToken:(id)a0 zoneID:(id)a1 resultsLimit:(unsigned long long)a2;
+ (id)fetchOperationFactory:(id)a0 token:(id)a1 batchSize:(unsigned long long)a2 activity:(id)a3;
+ (id)messageUpdateV1RecordType;
+ (long long)stepAfter:(long long)a0;

- (void)_scheduleOperation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_zoneCreated;
- (unsigned long long)_numberOfRecordsToFetchPerBatch;
- (id)_changeTokenKey;
- (id)_fetchRecordsOperationWithActivity:(id)a0;
- (void)_onChangeTokenUpdated:(id)a0 token:(id)a1 data:(id)a2;
- (void)_onReadComplete:(long long)a0 error:(id)a1 activity:(id)a2 completion:(id /* block */)a3;
- (void)_onRecordDeleted:(id)a0 type:(id)a1;
- (void)_onRecordRead:(id)a0;
- (void)_onRecordT1Write:(id)a0 error:(id)a1 recordNameToRowIDMap:(id)a2;
- (void)_onRecordT2Write:(id)a0 error:(id)a1 recordNameToItemMap:(id)a2;
- (void)_onRecordZoneFetchComplete:(id)a0 token:(id)a1 tokenData:(id)a2 moreComing:(BOOL)a3 error:(id)a4;
- (void)_onWriteT1Complete:(long long)a0 error:(id)a1 shouldWriteMore:(BOOL)a2 activity:(id)a3 completion:(id /* block */)a4;
- (void)_onWriteT2Complete:(long long)a0 error:(id)a1 shouldWriteMore:(BOOL)a2 activity:(id)a3 completion:(id /* block */)a4;
- (void)_readRecordsWithType:(long long)a0 attemptCount:(unsigned long long)a1 activity:(id)a2 completion:(id /* block */)a3;
- (id)_saveRecordsT1OperationWithMap:(id)a0 activity:(id)a1;
- (id)_saveRecordsT2OperationWithMap:(id)a0 activity:(id)a1;
- (void)_writeRecordsWithType:(long long)a0 activity:(id)a1 completion:(id /* block */)a2;
- (void)_writeT1RecordUpdatesWithType:(long long)a0 activity:(id)a1 completion:(id /* block */)a2;
- (void)_writeT2RecordUpdatesWithType:(long long)a0 activity:(id)a1 completion:(id /* block */)a2;
- (id)_writeUpdatesCKConfiguration:(id)a0;
- (void)_writeUpdatesWithType:(long long)a0 updateStep:(long long)a1 activity:(id)a2 completion:(id /* block */)a3;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)deleteUpdateSyncToken;
- (id)initWithSyncTokenStore:(id)a0;
- (id)saveT1UpdatesOperationFactory:(id)a0 token:(id)a1 batchSize:(unsigned long long)a2 recordNameToRowIDMap:(id)a3 activity:(id)a4;
- (id)saveT2UpdatesOperationFactory:(id)a0 token:(id)a1 batchSize:(unsigned long long)a2 recordNameToRowIDMap:(id)a3 activity:(id)a4;
- (void)syncWithType:(long long)a0 withActivity:(id)a1 withCompletion:(id /* block */)a2;

@end

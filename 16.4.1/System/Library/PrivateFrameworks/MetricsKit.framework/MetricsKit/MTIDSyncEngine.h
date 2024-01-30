@class NSMutableArray, NSString, NSMutableSet, CKRecordZoneID, NSObject, CKContainer;
@protocol OS_dispatch_queue, MTIDSyncEngineDelegate;

@interface MTIDSyncEngine : NSObject

@property (class, nonatomic) double transactionTimeout;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) NSMutableSet *queuedRecordIDs;
@property (retain, nonatomic) NSMutableSet *pendingRecordIDs;
@property (weak, nonatomic) NSMutableArray *transactions;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<MTIDSyncEngineDelegate> delegate;
@property (retain) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;

- (void)_endTransaction;
- (void)commit;
- (void)accountDidChange:(id)a0;
- (void)_beginTransaction;
- (void)start;
- (void).cxx_destruct;
- (void)deleteRecordsWithIDs:(id)a0;
- (void)fetchAllRecords;
- (void)addPendingRecordID:(id)a0;
- (void)addRecordIDsToSave:(id)a0 recordIDsToDelete:(id)a1 qualityOfService:(long long)a2;
- (void)fetchRecordWithID:(id)a0;
- (id)fetchRecordWithIDs:(id)a0;
- (void)handleDeletedRecordID:(id)a0 error:(id)a1;
- (void)handleEngineStartedWithError:(id)a0;
- (void)handleFetchedRecords:(id)a0 error:(id)a1;
- (void)handleSavedRecord:(id)a0 error:(id)a1;
- (void)handleUserRecordID:(id)a0;
- (id)initWithContainerIdentifier:(id)a0 zoneID:(id)a1 queue:(id)a2 delegate:(id)a3;
- (void)removePendingRecordID:(id)a0;
- (void)saveRecordsWithIDs:(id)a0 qualityOfService:(long long)a1;
- (void)setupContainerWithIdentifier:(id)a0;
- (void)startEngine;

@end

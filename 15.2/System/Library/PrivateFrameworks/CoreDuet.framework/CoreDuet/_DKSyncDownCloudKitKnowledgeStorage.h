@class _DKSyncCloudKitKnowledgeStorage;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncDownCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>

@property (retain) _DKSyncCloudKitKnowledgeStorage *common;
@property (retain) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;
@property (getter=isAvailable) BOOL available;

+ (id)sharedInstance;

- (void)setFetchDelegate:(id)a0;
- (BOOL)hasAdditionsFlagForPeer:(id)a0;
- (BOOL)hasDeletionsFlagForPeer:(id)a0;
- (void)updateStorageWithAddedEvents:(id)a0 deletedEventIDs:(id)a1 highPriority:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchSourceDeviceIDFromPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)clearPrewarmedFlag;
- (void)fetchEventsFromPeer:(id)a0 windows:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 fetchOrder:(long long)a4 highPriority:(BOOL)a5 completion:(id /* block */)a6;
- (void)setHasAdditionsFlag:(BOOL)a0 forPeer:(id)a1;
- (void)setHasDeletionsFlag:(BOOL)a0 forPeer:(id)a1;
- (void)fetchDeletedEventIDsFromPeer:(id)a0 sinceDate:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 highPriority:(BOOL)a4 completion:(id /* block */)a5;
- (void)prewarmFetchWithCompletion:(id /* block */)a0;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)cancelOutstandingOperations;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (id)name;
- (long long)transportType;

@end

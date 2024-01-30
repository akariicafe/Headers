@class _DKSync2Policy;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncRapportKnowledgeStorage : _DKSyncRapportStorage <_DKSyncRemoteKnowledgeStorage> {
    unsigned long long _currentChangeSetSequenceNumber;
}

@property (readonly, nonatomic) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;
@property (retain, nonatomic) _DKSync2Policy *policy;

+ (id)sharedInstance;

- (void)setHasDeletionsFlag:(BOOL)a0 forPeer:(id)a1;
- (void)prewarmFetchWithCompletion:(id /* block */)a0;
- (BOOL)hasDeletionsFlagForPeer:(id)a0;
- (void)setHasAdditionsFlag:(BOOL)a0 forPeer:(id)a1;
- (void)registerRequestIDsWithClient:(id)a0;
- (void)fetchEventsFromPeer:(id)a0 windows:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 fetchOrder:(long long)a4 highPriority:(BOOL)a5 completion:(id /* block */)a6;
- (void)setFetchDelegate:(id)a0;
- (BOOL)hasAdditionsFlagForPeer:(id)a0;
- (void)updateStorageWithAddedEvents:(id)a0 deletedEventIDs:(id)a1 highPriority:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)a0 highPriority:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)clearPrewarmedFlag;
- (void)fetchDeletedEventIDsFromPeer:(id)a0 sinceDate:(id)a1 streamNames:(id)a2 limit:(unsigned long long)a3 highPriority:(BOOL)a4 completion:(id /* block */)a5;

@end

@class NSString, CallHistoryDBClientHandle, TransactionManager;

@interface SyncManager : CHLogger <SyncManagerProtocol> {
    TransactionManager *_transactionManager;
}

@property (readonly, nonatomic) CallHistoryDBClientHandle *dbHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertRecordsWithoutTransactions:(id)a0;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (double)timerIncoming;
- (void)resetTimers;
- (void)insertWithoutTransaction:(id)a0;
- (long long)setRead:(BOOL)a0 forCallsWithPredicate:(id)a1 error:(id *)a2;
- (void)updateObjects:(id)a0;
- (id)predicateForCallKinds:(id)a0;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)predicateForLimits:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (long long)deleteCallsWithPredicate:(id)a0 error:(id *)a1;
- (void)deleteObjectWithUniqueId:(id)a0;
- (id)fetchAllObjects;
- (void)deleteAllObjects;
- (void)addUpdateTransactions:(id)a0;
- (void)deleteObjectsWithLimits:(id)a0;
- (void)updateAllObjects:(id)a0;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)fetchObjectsWithLimits:(id)a0;
- (id)archiveCallObject:(id)a0;
- (id)init;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (double)timerLifetime;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)predicateForCallKind:(id)a0;
- (void)insert:(id)a0;
- (double)timerOutgoing;
- (void).cxx_destruct;
- (void)initDBHandle;

@end

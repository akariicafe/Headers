@class NSString, HDProfile, HKSynchronousObserverSet;

@interface HDSharedSummaryManager : NSObject {
    HDProfile *_profile;
    NSString *_deviceIdentifier;
    HKSynchronousObserverSet *_observers;
}

- (BOOL)enumerateCommittedTransactionsWithError:(id *)a0 handler:(id /* block */)a1;
- (id)initWithProfile:(id)a0;
- (id)createReceivedTransactionWithUUID:(id)a0 sourceDeviceIdentifier:(id)a1 metadata:(id)a2 error:(id *)a3;
- (BOOL)deleteAllTransactionsWithError:(id *)a0;
- (BOOL)addSharedSummaries:(id)a0 transactionEntity:(id)a1 error:(id *)a2;
- (BOOL)reuseSharedSummariesWithUUIDs:(id)a0 transactionEntity:(id)a1 error:(id *)a2;
- (BOOL)removeSummariesWithUUIDs:(id)a0 transactionEntity:(id)a1 error:(id *)a2;
- (void)registerObserver:(id)a0;
- (BOOL)removeSummariesWithPackage:(id)a0 names:(id)a1 transactionEntity:(id)a2 error:(id *)a3;
- (BOOL)addMetadata:(id)a0 transactionEntity:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)createNewTransactionWithUUID:(id)a0 error:(id *)a1;
- (id)unitTest_transactionForEntity:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
- (BOOL)reuseSharedSummariesWithPackage:(id)a0 names:(id)a1 transactionEntity:(id)a2 error:(id *)a3;
- (BOOL)enumerateSummariesInTransactionEntity:(id)a0 package:(id)a1 names:(id)a2 error:(id *)a3 handler:(id /* block */)a4;
- (id)deviceIdentifierWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (BOOL)enumerateSummariesInTransaction:(id)a0 package:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (BOOL)discardTransactionEntity:(id)a0 error:(id *)a1;
- (BOOL)addOrReuseReceivedSharedSummaries:(id)a0 transactionEntity:(id)a1 error:(id *)a2;
- (id)uncommittedTransactionWithUUID:(id)a0 error:(id *)a1;
- (BOOL)enumerateNonCommittedTransactionsWithError:(id *)a0 handler:(id /* block */)a1;
- (id)commitTransactionEntity:(id)a0 error:(id *)a1;

@end

@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (id)fetchRequestContextForChanges;
- (void)executePrologue;
- (id)_transactionFromResult:(id)a0 withChanges:(id)a1;
- (void)dealloc;
- (id)createDeleteTransactionsRequestContext;
- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (id)_changeFromResult:(id)a0 withTransaction:(id)a1;
- (id)_processResult:(id)a0;
- (id)fetchRequestDescribingChanges;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)isWritingRequest;
- (id)createCountRequestContextForChanges;

@end

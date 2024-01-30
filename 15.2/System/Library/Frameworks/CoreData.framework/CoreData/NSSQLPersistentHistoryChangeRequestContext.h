@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (id)fetchRequestContextForChanges;
- (id)createDeleteTransactionsRequestContext;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (BOOL)isWritingRequest;
- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (void)executePrologue;
- (id)createCountRequestContextForChanges;
- (void)dealloc;

@end

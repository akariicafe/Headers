@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (BOOL)isWritingRequest;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (id)createCountRequestContextForChanges;
- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (void)dealloc;
- (id)fetchRequestContextForChanges;
- (void)executePrologue;
- (id)createDeleteTransactionsRequestContext;

@end

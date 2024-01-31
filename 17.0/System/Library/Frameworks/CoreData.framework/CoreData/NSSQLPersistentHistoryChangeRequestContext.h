@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches;

- (id)createRequestContextForChangesWithTransactionIDs:(id)a0;
- (void)dealloc;
- (id)fetchRequestContextForChanges;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (id)createCountRequestContextForChanges;
- (void)executePrologue;
- (BOOL)isWritingRequest;
- (id)createDeleteTransactionsRequestContext;

@end

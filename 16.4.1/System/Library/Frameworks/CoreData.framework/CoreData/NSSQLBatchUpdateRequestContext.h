@class NSBatchUpdateRequest, NSSQLiteStatement, NSFetchRequest;

@interface NSSQLBatchUpdateRequestContext : NSSQLBatchOperationRequestContext {
    NSSQLiteStatement *_updateStatement;
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSBatchUpdateRequest *request;

- (BOOL)isWritingRequest;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (void)dealloc;
- (id)createFetchRequestContextForObjectsToUpdate;
- (BOOL)executeRequestCore:(id *)a0;
- (void)executePrologue;

@end

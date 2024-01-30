@class NSBatchUpdateRequest, NSSQLiteStatement, NSFetchRequest;

@interface NSSQLBatchUpdateRequestContext : NSSQLStoreRequestContext {
    NSSQLiteStatement *_updateStatement;
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSBatchUpdateRequest *request;

- (id)createFetchRequestContextForObjectsToUpdate;
- (BOOL)executeRequestCore:(id *)a0;
- (BOOL)isWritingRequest;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (void)executePrologue;
- (void)dealloc;

@end

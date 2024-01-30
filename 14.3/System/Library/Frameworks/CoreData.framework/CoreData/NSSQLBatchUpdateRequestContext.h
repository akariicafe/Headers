@class NSBatchUpdateRequest, NSSQLiteStatement, NSFetchRequest;

@interface NSSQLBatchUpdateRequestContext : NSSQLStoreRequestContext {
    NSSQLiteStatement *_updateStatement;
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSBatchUpdateRequest *request;
@property (readonly, nonatomic) NSSQLiteStatement *updateStatement;

- (void)executePrologue;
- (void)dealloc;
- (id)dropObjectIDCaptureStatements;
- (id)createFetchRequestContextForObjectsToUpdate;
- (BOOL)executeRequestCore:(id *)a0;
- (void)_createUpdateStatement;
- (id)fetchRequestDescribingObjectsToUpdate;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)isWritingRequest;
- (id)createObjectIDCaptureStatements;
- (id)tempTableName;

@end

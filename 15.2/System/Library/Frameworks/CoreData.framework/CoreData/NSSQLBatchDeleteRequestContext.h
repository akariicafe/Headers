@class NSBatchDeleteRequest, NSArray, NSString, NSFetchRequest, NSSQLFetchRequestContext;

@interface NSSQLBatchDeleteRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequestForObjectsToDelete;
    NSArray *_deleteStatements;
    NSArray *_deletedObjectIDs;
    NSSQLFetchRequestContext *_fetchContext;
    NSArray *_externalDataReferenceTriggerStatements;
    NSString *_tempTableName;
    NSArray *_externalDataReferencesToDelete;
    NSArray *_fileBackedFuturesToDelete;
}

@property (readonly, nonatomic) NSBatchDeleteRequest *request;

- (BOOL)executeRequestCore:(id *)a0;
- (BOOL)isWritingRequest;
- (void)executePrologue;
- (void)dealloc;

@end

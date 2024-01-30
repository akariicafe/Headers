@class NSBatchDeleteRequest, NSArray, NSString, NSFetchRequest, NSSQLFetchRequestContext;

@interface NSSQLBatchDeleteRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequestForObjectsToDelete;
    NSSQLFetchRequestContext *_fetchContext;
}

@property (readonly, nonatomic) NSBatchDeleteRequest *request;
@property (readonly, retain, nonatomic) NSFetchRequest *fetchRequestForObjectsToDelete;
@property (readonly, retain, nonatomic) NSArray *deleteStatements;
@property (readonly, retain, nonatomic) NSSQLFetchRequestContext *fetchContext;
@property (retain, nonatomic) NSArray *affectedObjectIDs;
@property (retain, nonatomic) NSArray *exernalDataReferenceStatements;
@property (retain, nonatomic) NSString *tempTableName;
@property (retain, nonatomic) NSArray *externalDataReferencesToDelete;
@property (retain, nonatomic) NSArray *fileBackedFuturesToDelete;

- (void)executePrologue;
- (void)dealloc;
- (BOOL)executeRequestCore:(id *)a0;
- (id)_createFetchRequestContextForObjectsToDelete;
- (BOOL)isWritingRequest;
- (void)_createDeleteStatements;

@end

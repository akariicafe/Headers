@class NSManagedObjectContext, NSSet, NSDictionary, NSXPCStore, NSMutableDictionary, NSSaveChangesRequest;

@interface NSXPCSaveRequestContext : NSObject {
    NSXPCStore *_store;
    NSSaveChangesRequest *_request;
    NSDictionary *_metadata;
    NSManagedObjectContext *_context;
    NSMutableDictionary *_changeCache;
}

@property (readonly, nonatomic) BOOL forceUpdates;
@property (nonatomic) unsigned long long interrupts;
@property (readonly, nonatomic) NSDictionary *changeCache;
@property (readonly, nonatomic) NSSet *rowsToDelete;

- (id)managedObjectContext;
- (id)_cacheNodePropertiesFromObject:(id)a0;
- (id)rowForID:(id)a0;
- (id)_encodeObjectValues:(id)a0 options:(unsigned long long)a1;
- (void)_addRowForInsertOrUpdate:(id)a0;
- (id)_encodeObjectsForSave:(id)a0 forDelete:(BOOL)a1;
- (void)dealloc;
- (id)newEncodedSaveRequest;
- (id)request;
- (id)initForStore:(id)a0 request:(id)a1 metadata:(id)a2 forceInsertsToUpdates:(BOOL)a3 context:(id)a4;
- (void)_updateRollbackCacheForObjectWithID:(id)a0 relationship:(id)a1 withValuesFrom:(id)a2;

@end

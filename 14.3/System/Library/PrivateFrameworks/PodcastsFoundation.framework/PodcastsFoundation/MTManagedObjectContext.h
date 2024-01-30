@interface MTManagedObjectContext : NSManagedObjectContext

@property (nonatomic) long long type;
@property (nonatomic) BOOL isResetable;

- (void)deleteObject:(id)a0;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void)reset;
- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)objectWithID:(id)a0;
- (id)objectRegisteredForID:(id)a0;
- (id)existingObjectWithID:(id)a0 error:(id *)a1;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)insertObject:(id)a0;
- (void)validateConcurencyType;
- (BOOL)handleError:(id *)a0 withCallback:(id /* block */)a1;
- (BOOL)_isInternalCoreDataQueue;
- (void)seedCacheWithObjectsInEntity:(id)a0 predicate:(id)a1;
- (void)seedCacheWithObjectsInEntity:(id)a0 predicateFormat:(id)a1;
- (void)seedCacheWithObjectsInArray:(id)a0 forUUIDKey:(id)a1 entityName:(id)a2;

@end

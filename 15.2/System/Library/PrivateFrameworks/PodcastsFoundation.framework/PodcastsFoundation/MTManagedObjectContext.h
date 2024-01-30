@interface MTManagedObjectContext : NSManagedObjectContext

@property (nonatomic) long long type;
@property (nonatomic) BOOL isResetable;

- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (id)objectWithID:(id)a0;
- (id)existingObjectWithID:(id)a0 error:(id *)a1;
- (id)objectRegisteredForID:(id)a0;
- (void)insertObject:(id)a0;
- (void)deleteObject:(id)a0;
- (void)reset;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)validateConcurencyType;
- (void)validatePodcastDeletion:(id)a0;
- (BOOL)handleError:(id *)a0 withCallback:(id /* block */)a1;
- (BOOL)_isInternalCoreDataQueue;

@end

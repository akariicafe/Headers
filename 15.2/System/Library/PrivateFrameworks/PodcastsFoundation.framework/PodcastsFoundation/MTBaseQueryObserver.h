@class NSString, NSMutableDictionary, NSFetchedResultsController;

@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate, MTQueryObserver> {
    NSFetchedResultsController *_frc;
}

@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (nonatomic) BOOL isObserving;
@property (nonatomic) BOOL stopCalled;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)fetchedResultsControllerClass;

- (void)startObserving;
- (id)managedObjectContext;
- (id)sortDescriptors;
- (id)_frc;
- (id)initWithFetchRequest:(id)a0;
- (void)setPredicate:(id)a0;
- (id)predicate;
- (void).cxx_destruct;
- (id)uuids;
- (id)initWithFetchRequest:(id)a0 managedObjectContext:(id)a1;
- (void)dealloc;
- (void)stop;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 managedObjectContext:(id)a2;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 returnObjectsAsFaults:(BOOL)a4;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 batchSize:(long long)a4 propertiesToFetch:(id)a5 managedObjectContext:(id)a6;
- (void)results:(id /* block */)a0;
- (void)removeAllResultsChangedHandlers;
- (id)initWithEntityName:(id)a0 predicate:(id)a1;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 background:(BOOL)a2;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 batchSize:(long long)a4 propertiesToFetch:(id)a5;
- (void)refetch:(id /* block */)a0;
- (id)addResultsChangedHandler:(id)a0;
- (void)removeResultsChangedHandler:(id)a0;

@end

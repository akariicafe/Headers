@class NSHashTable, NSError, NSArray, WFDatabaseResultFetchOperation, NSSet, NSPredicate, NSObject, WFCoreDataResultState, NSNumber, WFDatabase;
@protocol OS_dispatch_queue;

@interface WFDatabaseResult : NSObject

@property (readonly, nonatomic) NSArray *staticDescriptors;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSHashTable *observersTable;
@property (retain, nonatomic) NSNumber *cachedCount;
@property (readonly, nonatomic) NSArray *observers;
@property (readonly, nonatomic) WFDatabaseResultFetchOperation *fetchOperation;
@property (readonly, copy, nonatomic) NSSet *relationshipKeysAffectingDescriptors;
@property (copy, nonatomic) NSSet *lastFetchedObjectIDs;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSError *fetchError;
@property (readonly, nonatomic) NSArray *descriptors;
@property (copy, nonatomic) NSPredicate *searchPredicate;
@property (readonly, nonatomic) WFCoreDataResultState *state;

- (id)initWithStaticDescriptors:(id)a0;
- (id)initWithDatabase:(id)a0 fetchOperation:(id)a1 relationshipKeysAffectingDescriptors:(id)a2;
- (void)registerObserver:(id)a0;
- (id)description;
- (void)invalidateCacheWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)notifyObserversAboutChange:(id)a0 fromPreviousDescriptors:(id)a1;
- (void)unregisterObserver:(id)a0;
- (id)initWithDatabase:(id)a0 fetchRequest:(id)a1 relationshipKeysAffectingDescriptors:(id)a2;
- (id)initWithDatabase:(id)a0 fetchRequest:(id)a1;
- (id)initWithDatabase:(id)a0 fetchOperation:(id)a1;

@end

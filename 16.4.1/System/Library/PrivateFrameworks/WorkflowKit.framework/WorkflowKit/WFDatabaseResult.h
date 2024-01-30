@class NSHashTable, NSError, NSArray, NSPredicate, NSObject, WFCoreDataResultState, NSNumber, WFDatabase;
@protocol OS_dispatch_queue, WFDatabaseResultFetchOperation;

@interface WFDatabaseResult : NSObject

@property (readonly, nonatomic) NSArray *staticDescriptors;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSHashTable *observersTable;
@property (retain, nonatomic) NSNumber *cachedCount;
@property (readonly, nonatomic) NSArray *observers;
@property (readonly, nonatomic) id<WFDatabaseResultFetchOperation> fetchOperation;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSError *fetchError;
@property (readonly, nonatomic) NSArray *descriptors;
@property (copy, nonatomic) NSPredicate *searchPredicate;
@property (readonly, nonatomic) WFCoreDataResultState *state;

+ (id)callbackQueue;

- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDatabase:(id)a0 fetchOperation:(id)a1;
- (id)initWithDatabase:(id)a0 fetchRequest:(id)a1;
- (id)initWithDatabase:(id)a0 fetchRequest:(id)a1 relationshipKeysAffectingDescriptors:(id)a2;
- (id)initWithStaticDescriptors:(id)a0;
- (void)updateDescriptorsAndNotify:(id)a0 state:(id)a1;

@end

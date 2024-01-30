@class AVTCoreEnvironment, NSMutableArray, NSObject;
@protocol AVTEventCoalescer, NSObject, AVTCoreDataPersistentStoreConfiguration, OS_dispatch_queue, AVTUILogger;

@interface AVTCoreDataRemoteChangesObserver : NSObject <AVTCoreDataRemoteChangesObserver>

@property (readonly, nonatomic) id<AVTCoreDataPersistentStoreConfiguration> configuration;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<AVTEventCoalescer> coalescer;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (retain, nonatomic) id<NSObject> observationToken;
@property (readonly, nonatomic) NSMutableArray *changeHandlers;
@property (readonly, nonatomic) NSMutableArray *transactionsForPendingChanges;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 workQueue:(id)a1 coalescer:(id)a2 environment:(id)a3;
- (void)startObservingChanges;
- (void)performManagedObjectContextWork:(id /* block */)a0;
- (void)registerCoalescerEventHandler;
- (void)processRemoteChangeNotification:(id)a0 completion:(id /* block */)a1;
- (id)changeTransactionsForToken:(id)a0 managedObjectContext:(id)a1;
- (BOOL)isObservingChanges;
- (void)addChangesHandler:(id /* block */)a0;

@end

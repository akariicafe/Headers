@class NSString, NSPersistentStoreCoordinator, NSArray, NSObject;
@protocol OS_dispatch_queue, RTPersistenceContainerDelegate;

@interface RTPersistenceContainer : NSObject {
    NSArray *_configurations;
}

@property (retain) NSObject<OS_dispatch_queue> *contextRequestsQueue;
@property BOOL serveContexts;
@property BOOL setupFailed;
@property (retain) NSPersistentStoreCoordinator *coordinator;
@property (weak, nonatomic) id<RTPersistenceContainerDelegate> delegate;
@property (readonly) NSString *name;
@property (readonly) BOOL storesNeedSetup;

- (id)waitForPersistenceContext;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)persistenceContext;
- (id)persistenceContextWithOptions:(unsigned long long)a0;
- (id)_persistenceContext;
- (id)initWithName:(id)a0 model:(id)a1 configurations:(id)a2;
- (BOOL)_validateConfigurations:(id)a0;
- (void)suspendPersistenceStores;
- (void)resumePersistenceStores;
- (id)tearDownPersistenceStack;
- (void)setupPersistenceStores;
- (BOOL)updateContainerConfigurations:(id)a0;
- (void)persistenceContextWithHandler:(id /* block */)a0;

@end

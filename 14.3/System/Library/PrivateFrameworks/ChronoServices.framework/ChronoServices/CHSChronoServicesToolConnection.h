@class NSString, NSMutableSet, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSChronoServicesToolConnection : NSObject <CHSChronoToolServiceClient, CHSChronoToolServiceServer>

@property (retain, nonatomic) NSMutableSet *clients;
@property (retain, nonatomic) BSServiceConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)_queue_removeClient:(id)a0;
- (id)init;
- (void)_createConnection;
- (void).cxx_destruct;
- (void)_invalidateConnection;
- (oneway void)cacheDescriptorsForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)disableWakeBudgetForExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)resetCaches:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)disableWakeBudgetWithCompletion:(id /* block */)a0;
- (oneway void)resetWakeBudgetWithCompletion:(id /* block */)a0;
- (void)widgetsWithTimelines:(id /* block */)a0;
- (oneway void)resetWakeBudgetForExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchStateWithCompletion:(id /* block */)a0;
- (oneway void)wakesRemainingForExtensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)listStateCaptureIdentifiersWithCompletion:(id /* block */)a0;
- (oneway void)fetchStateForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)timelineForWidgetKey:(id)a0 completion:(id /* block */)a1;
- (id)_init;
- (void)_queue_addClient:(id)a0;
- (id)_remoteTarget;

@end

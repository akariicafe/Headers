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

- (void)removeClient:(id)a0;
- (void)_invalidateConnection;
- (oneway void)extensionInfo:(id /* block */)a0;
- (oneway void)cacheDescriptorsForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchStateWithCompletion:(id /* block */)a0;
- (oneway void)listStateCaptureIdentifiersWithCompletion:(id /* block */)a0;
- (oneway void)fetchStateForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)extensionInfoForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)widgetsWithTimelines:(id /* block */)a0;
- (oneway void)timelineForWidgetKey:(id)a0 completion:(id /* block */)a1;
- (oneway void)resetCaches:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)reloadTimelinesOfKind:(id)a0 containedIn:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (oneway void)expireLocationGracePeriods;
- (void)_queue_addClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)addClient:(id)a0;
- (void)_createConnection;
- (id)_remoteTarget;
- (void)_queue_removeClient:(id)a0;

@end

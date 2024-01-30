@class NSXPCListener, NSString, NSMutableDictionary, BKSApplicationStateMonitor, NSObject;
@protocol OS_dispatch_queue, BBDataProviderStoreDelegate;

@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate, BBDataProviderStore> {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_registerQueue;
    NSMutableDictionary *_dataProviderConnectionsByService;
    NSMutableDictionary *_dataProviderConnectionsBySectionID;
    NSMutableDictionary *_dataProviderConnectionsByUniversalSectionID;
    NSMutableDictionary *_xpcConnectionsByService;
    id<BBDataProviderStoreDelegate> _delegate;
    int _listeningToken;
    BKSApplicationStateMonitor *_appStateMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcInterface;
+ (id)resolverWithDelegate:(id)a0;

- (id)debugDescriptionWithChildren:(unsigned long long)a0;
- (id)dataProviderForSectionID:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)remoteDataProviderNeedsToWakeClient:(id)a0;
- (void)dataProviderStore:(id)a0 didAddDataProvider:(id)a1 performMigration:(BOOL)a2 completion:(id /* block */)a3;
- (void)wakeService:(id)a0 bundleID:(id)a1;
- (void)_registerServiceName:(id)a0 appBundleID:(id)a1 completion:(id /* block */)a2;
- (void)performBlockOnDataProviders:(id /* block */)a0;
- (void)removeDataProvider:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)loadAllDataProviders;
- (void)registerServiceName:(id)a0 appBundleID:(id)a1 completion:(id /* block */)a2;
- (id)dataProvidersForUniversalSectionID:(id)a0;
- (void).cxx_destruct;
- (void)dataProviderStore:(id)a0 didRemoveDataProvider:(id)a1;
- (void)dealloc;
- (void)_registerForPublicationNotification;
- (void)dataProviderStore:(id)a0 didAddParentSectionFactory:(id)a1;

@end

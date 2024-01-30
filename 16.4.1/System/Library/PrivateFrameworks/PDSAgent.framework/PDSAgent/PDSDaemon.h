@class PDSUserTracker, PDSXPCServer, PDSCoordinator, PDSBag, PDSRequestQueue, NSString, PDSCDCacheContainer, PDSConfiguration, PDSEntryStore;
@protocol PDSCDCache, PDSKVStore;

@interface PDSDaemon : NSObject <PDSDaemonListenerVendor>

@property (retain, nonatomic) PDSConfiguration *configuration;
@property (retain, nonatomic) PDSXPCServer *XPCServer;
@property (retain, nonatomic) PDSCDCacheContainer *cacheContainer;
@property (retain, nonatomic) PDSBag *bag;
@property (weak, nonatomic) PDSEntryStore *entryStore;
@property (weak, nonatomic) id<PDSCDCache, PDSKVStore> underlyingStorage;
@property (retain, nonatomic) PDSUserTracker *userTracker;
@property (retain, nonatomic) PDSCoordinator *coordinator;
@property (retain, nonatomic) PDSRequestQueue *requestQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteListenerForClientIDs:(id)a0;
- (id)remoteInternalListener;
- (id)_underlyingStorage;
- (id)_entryStore;
- (id)remoteListenerForAllClientIDs;
- (void)start;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end

@class geo_isolater, NSString, GEOActiveTileGroup, NSMutableDictionary, NSObject, GEOResourceManifestConfiguration;
@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue, OS_xpc_object;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_xpc_object> *_conn;
    BOOL _sentConfigurationMessage;
    BOOL _hasOpenConnection;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
    NSObject<OS_dispatch_queue> *_serverQueue;
    GEOResourceManifestConfiguration *_configuration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _authTokenLock;
    NSString *_authToken;
    int _activeTileGroupChangedNotificationToken;
    geo_isolater *_maximumZoomLevelIsolation;
    NSMutableDictionary *_maximumZoomLevelCache;
}

@property (weak, nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;
@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)authToken;
- (oneway void)setActiveTileGroupIdentifier:(id)a0;
- (void)activateResourceScale:(int)a0;
- (void)setManifestToken:(id)a0 completionHandler:(id /* block */)a1;
- (id)serverQueue;
- (void)getResourceManifestWithHandler:(id /* block */)a0;
- (void)setActiveTileGroupIdentifier:(id)a0 updateType:(long long)a1 completionHandler:(id /* block */)a2;
- (oneway void)resetActiveTileGroup;
- (id)updateProgress;
- (void)activateResourceScenario:(int)a0;
- (void)deactivateResourceScale:(int)a0;
- (void)updateIfNecessary:(id /* block */)a0;
- (void)closeConnection;
- (void)_handleMessage:(id)a0 xpcMessage:(id)a1;
- (void)performOpportunisticResourceLoading;
- (id)configuration;
- (void)forceUpdate:(long long)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 configuration:(id)a1;
- (void)deactivateResourceScenario:(int)a0;
- (void)cancelCurrentManifestUpdate;
- (unsigned long long)maximumZoomLevelForStyle:(int)a0 scale:(int)a1 outSize:(int *)a2;
- (void)openConnection;
- (void).cxx_destruct;

@end

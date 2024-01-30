@class NSString, GEOActiveTileGroup, NSObject, GEOResourceManifestConfiguration;
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
}

@property (weak, nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;
@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_xpcConnection;
- (id)serverQueue;
- (void)closeConnection;
- (void)openConnection;
- (void)_handleMessage:(id)a0 xpcMessage:(id)a1;
- (void).cxx_destruct;
- (void)cancelCurrentManifestUpdate;
- (id)authToken;
- (void)setManifestToken:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 configuration:(id)a1;
- (void)dealloc;
- (void)activateResourceScale:(int)a0;
- (id)configuration;
- (id)updateProgress;
- (void)deactivateResourceScale:(int)a0;
- (void)forceUpdate:(long long)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)maximumZoomLevelForStyle:(int)a0 scale:(int)a1;
- (oneway void)setActiveTileGroupIdentifier:(id)a0;
- (void)getResourceManifestWithHandler:(id /* block */)a0;
- (oneway void)resetActiveTileGroup;
- (void)performOpportunisticResourceLoading;
- (void)activateResourceScenario:(int)a0;
- (void)deactivateResourceScenario:(int)a0;
- (void)updateIfNecessary:(id /* block */)a0;
- (void)setActiveTileGroupIdentifier:(id)a0 updateType:(long long)a1 completionHandler:(id /* block */)a2;

@end

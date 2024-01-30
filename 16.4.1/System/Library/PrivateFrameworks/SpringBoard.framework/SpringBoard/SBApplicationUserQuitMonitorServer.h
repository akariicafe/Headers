@class NSMutableArray, NSString, FBServiceClientAuthenticator, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue;

@interface SBApplicationUserQuitMonitorServer : NSObject <BSServiceConnectionListenerDelegate> {
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_queue_addConnection:(id)a0;
- (void)userClosedLastSceneOfApplicationWithBundleID:(id)a0;
- (void)_queue_removeConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

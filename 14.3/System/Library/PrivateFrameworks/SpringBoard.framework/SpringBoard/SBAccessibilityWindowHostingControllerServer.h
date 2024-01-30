@class NSObject, NSString, FBServiceClientAuthenticator, NSMapTable, NSMutableDictionary, NSMutableArray, BSServiceConnectionListener;
@protocol OS_dispatch_queue;

@interface SBAccessibilityWindowHostingControllerServer : NSObject <BSServiceConnectionListenerDelegate, SBSAccessibilityWindowHostingClientToServerInterface, BSInvalidatable> {
    NSMutableArray *_activeConnections;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    NSMapTable *_connectionToHostedContextIDs;
    NSMutableDictionary *_contextIDToScene;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)registerWindowWithContextID:(id)a0 atLevel:(id)a1;
- (void)unregisterWindowWithContextID:(id)a0;
- (void)activate;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)invalidate;
- (void)_handleDisconnectForServiceConnection:(id)a0;
- (void)_beginHostingWindowWithContextID:(unsigned int)a0 atLevel:(double)a1;
- (void)_endHostingWindowWithContextID:(unsigned int)a0;

@end

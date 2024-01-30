@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSString;
@protocol PUEditingExtensionUndoButtonHost;

@interface PUEditingExtensionUndoProxyHostSide : NSObject <PUEditingExtensionUndoButtonHost, NSXPCListenerDelegate, PUEditingExtensionUndoTarget>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (weak, nonatomic) id<PUEditingExtensionUndoButtonHost> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObject;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)performUndo;
- (void)performRedo;
- (void)setUndoEnabled:(BOOL)a0 redoEnabled:(BOOL)a1;
- (void)setShowUndoRedo:(BOOL)a0;

@end

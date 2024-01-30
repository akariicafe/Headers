@class NSString, NSXPCConnection;

@interface SUSUIControllerClient : NSObject <SUSUIControllerServerInterface> {
    NSXPCConnection *_serverConnection;
    BOOL _connected;
    BOOL _serverIsExiting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)_invalidateConnection;
- (void)_connectToServerIfNecessary;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_noteConnectionDropped;
- (void)dealloc;
- (id)_remoteInterface;
- (BOOL)createKeybagWithSecret:(id)a0;
- (void)_noteServerExiting;

@end

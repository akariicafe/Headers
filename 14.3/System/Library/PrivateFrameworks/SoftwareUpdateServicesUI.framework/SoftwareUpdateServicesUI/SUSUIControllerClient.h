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

- (id)init;
- (void).cxx_destruct;
- (void)_noteConnectionDropped;
- (void)_invalidateConnection;
- (void)dealloc;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (id)_remoteInterface;
- (void)_connectToServerIfNecessary;
- (void)invalidate;
- (BOOL)createKeybagWithSecret:(id)a0;
- (void)_noteServerExiting;

@end

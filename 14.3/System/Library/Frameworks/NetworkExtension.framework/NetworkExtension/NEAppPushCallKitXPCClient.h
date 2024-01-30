@class NSXPCConnection;

@interface NEAppPushCallKitXPCClient : NSObject <CXNetworkExtensionVoIPXPCClient>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)init;
- (void)registerVoIPMessagePayload;
- (void).cxx_destruct;
- (void)dealloc;
- (void)voipNetworkExtensionRegistrationFailed;
- (void)voipNetworkExtensionPayloadReceived:(id)a0 mustPostCall:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)unregisterVoIPMessagePayload;
- (void)invalidate;

@end

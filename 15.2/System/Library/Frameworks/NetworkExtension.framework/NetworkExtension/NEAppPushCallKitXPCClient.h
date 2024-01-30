@class NSXPCConnection;

@interface NEAppPushCallKitXPCClient : NSObject <CXNetworkExtensionVoIPXPCClient>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)registerVoIPMessagePayload;
- (void)voipNetworkExtensionPayloadReceived:(id)a0 mustPostCall:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)voipNetworkExtensionRegistrationFailed;
- (void)unregisterVoIPMessagePayload;

@end

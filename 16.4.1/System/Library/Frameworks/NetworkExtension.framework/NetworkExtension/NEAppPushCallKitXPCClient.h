@class NSXPCConnection;

@interface NEAppPushCallKitXPCClient : NSObject <CXNetworkExtensionVoIPXPCClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)voipNetworkExtensionPayloadReceived:(id)a0 mustPostCall:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)voipNetworkExtensionRegistrationFailed;

@end

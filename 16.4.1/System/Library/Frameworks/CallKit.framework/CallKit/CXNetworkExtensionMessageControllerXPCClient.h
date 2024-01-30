@class NSString, NSXPCConnection;

@interface CXNetworkExtensionMessageControllerXPCClient : NSObject <CXNetworkExtensionMessageControllerDataSource>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sendNetworkExtensionMessage:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)sendNetworkExtensionPushToTalkMessage:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;

@end

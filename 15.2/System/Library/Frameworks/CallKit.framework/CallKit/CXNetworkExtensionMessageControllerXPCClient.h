@class NSString, NSXPCConnection;

@interface CXNetworkExtensionMessageControllerXPCClient : NSObject <CXNetworkExtensionMessageControllerDataSource>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)sendNetworkExtensionMessage:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;

@end

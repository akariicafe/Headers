@class NSSet, NSString, NSXPCConnection;
@protocol CXNetworkExtensionMessageControllerHostConnectionDelegate;

@interface CXNetworkExtensionMessageControllerHostConnection : NSObject <CXNetworkExtensionMessageControllerHostProtocol>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (weak, nonatomic) id<CXNetworkExtensionMessageControllerHostConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)sendNetworkExtensionMessage:(id)a0 forBundleIdentifier:(id)a1 reply:(id /* block */)a2;

@end

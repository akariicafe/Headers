@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, WCPrivateXPCManagerDelegate;

@interface WCPrivateXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCPrivateManagerClientProtocol>

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property int listenerResumedToken;
@property int privateServiceShouldConnectToken;
@property (weak, nonatomic) NSObject<WCPrivateXPCManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedManager;
+ (id)privateDaemonInterface;
+ (id)privateClientInterface;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupConnection;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)handlePingForExtensionBundleID:(id)a0;
- (void)isExtensionPrivileged:(id)a0 completionHandler:(id /* block */)a1;
- (void)fakeIncomingPayloadOnSubService:(id)a0 ofType:(id)a1 clientData:(id)a2 resource:(id)a3 resourceSandboxToken:(id)a4 completionHandler:(id /* block */)a5;
- (void)handlePairedSyncComplicationsStartedWithCompletionHandler:(id /* block */)a0;

@end

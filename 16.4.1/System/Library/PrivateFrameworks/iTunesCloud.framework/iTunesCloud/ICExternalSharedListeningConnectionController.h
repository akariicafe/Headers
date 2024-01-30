@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ICExternalSharedListeningConnectionController : ICSharedListeningConnectionController <ICSharedListeningConnectionClientProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessage:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)receiveStartWithSessionIdentifier:(id)a0 sessionToken:(id)a1 inviteURLString:(id)a2;
- (void)_initializeConnectionIfNeeded;
- (id)initWithSessionIdentifier:(id)a0 identity:(id)a1 bundleID:(id)a2;
- (void)receiveConnectionError:(id)a0;
- (void)receiveFatalError:(id)a0;
- (void)receiveMessageData:(id)a0;

@end

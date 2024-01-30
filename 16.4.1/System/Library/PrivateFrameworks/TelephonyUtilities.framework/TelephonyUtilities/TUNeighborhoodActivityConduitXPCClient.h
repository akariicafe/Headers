@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, TUNeighborhoodActivityConduitXPCClientDelegate;

@interface TUNeighborhoodActivityConduitXPCClient : NSObject <TUNeighborhoodActivityConduitXPCClient>

@property (class, readonly, nonatomic) NSXPCInterface *neighborhoodActivityClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *neighborhoodActivityServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) int token;
@property (weak, nonatomic) id<TUNeighborhoodActivityConduitXPCClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedXPCClasses;
+ (void)setAsynchronousServer:(id)a0;
+ (id)asynchronousServer;

- (oneway void)tvDeviceAppeared:(id)a0;
- (void)cancelSplitSessionApproval;
- (oneway void)tvDeviceDisappeared:(id)a0;
- (void)nearbyTVDevicesWithCompletion:(id /* block */)a0;
- (id)serverWithErrorHandler:(id /* block */)a0;
- (id)server;
- (void)disconnectTVDevice:(id)a0 completion:(id /* block */)a1;
- (void)inviteTVDevice:(id)a0 toConversationWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)ensureConnection;
- (void)activeSplitSessionTVDeviceWithCompletion:(id /* block */)a0;
- (id)init;
- (void)approveSplitSessionForConversation:(id)a0 requestedFromDevice:(id)a1 pullContext:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (oneway void)splitSessionStarted:(id)a0;
- (void)registerApprovalClientEnabled:(BOOL)a0;
- (oneway void)splitSessionEnded:(id)a0;

@end

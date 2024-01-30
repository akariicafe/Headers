@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, TUMomentsControllerDataSourceDelegate, TUMomentsControllerXPCServer;

@interface TUMomentsControllerXPCClient : NSObject <TUMomentsControllerXPCClient, TUMomentsControllerDataSource>

@property (class, retain, nonatomic) id<TUMomentsControllerXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUMomentsControllerXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *momentsControllerClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *momentsControllerServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) int token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TUMomentsControllerDataSourceDelegate> delegate;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, copy, nonatomic) NSString *processName;

- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (id)serverWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_registerConnection;
- (oneway void)didReceiveLocallyRequestedMomentDescriptor:(id)a0;
- (oneway void)didUpdateCapabilities:(id)a0 forVideoStreamToken:(long long)a1;
- (void)endRequestWithTransactionID:(id)a0 completion:(id /* block */)a1;
- (id)processBundleIdentifier;
- (void)registerStreamToken:(long long)a0 requesterID:(id)a1 remoteIDSDestinations:(id)a2 remoteMomentsAvailable:(BOOL)a3 completion:(id /* block */)a4;
- (oneway void)requestSandboxExtensionForURL:(id)a0 reply:(id /* block */)a1;
- (void)startRequestWithMediaType:(int)a0 forStreamToken:(long long)a1 requesteeID:(id)a2 completion:(id /* block */)a3;
- (void)unregisterStreamToken:(long long)a0 completion:(id /* block */)a1;
- (oneway void)willCaptureRemoteRequestFromRequesterID:(id)a0;

@end

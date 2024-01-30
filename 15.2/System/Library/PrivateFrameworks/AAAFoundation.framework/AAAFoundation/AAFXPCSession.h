@class NSUUID, NSXPCConnection, AAFXPCSessionConfig, NSObject;
@protocol OS_dispatch_queue, AAFXPCSessionDelegate;

@interface AAFXPCSession : NSObject

@property (retain, nonatomic) id _proxy;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) AAFXPCSessionConfig *remoteServiceConfig;
@property (weak, nonatomic) id<AAFXPCSessionDelegate> delegate;
@property (retain, nonatomic) NSXPCConnection *connection;

- (id)remoteServiceProxy;
- (id)remoteServiceProxyWithErrorHandler:(id /* block */)a0;
- (void)destroyXPCConnection;
- (void).cxx_destruct;
- (id)initWithRemoteServiceConfig:(id)a0 delegate:(id)a1;
- (id)syncRemoteServiceProxy;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (id)syncRemoteServiceProxyWithErrorHandler:(id /* block */)a0;

@end

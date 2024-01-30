@class NSUUID, NSXPCConnection, AAFXPCSessionConfig, NSObject;
@protocol OS_dispatch_queue, AAFXPCSessionDelegate;

@interface AAFXPCSession : NSObject

@property (retain, nonatomic) id _proxy;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) AAFXPCSessionConfig *remoteServiceConfig;
@property (weak, nonatomic) id<AAFXPCSessionDelegate> delegate;
@property (retain, nonatomic) NSXPCConnection *connection;

- (void)destroyXPCConnection;
- (void)suspend;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithRemoteServiceConfig:(id)a0 delegate:(id)a1;
- (id)remoteServiceProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteServiceProxy;
- (id)syncRemoteServiceProxy;
- (id)syncRemoteServiceProxyWithErrorHandler:(id /* block */)a0;

@end

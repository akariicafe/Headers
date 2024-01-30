@class NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, ADAdServingDaemonConnectionDelegate;

@interface ADAdServingDaemonConnection : NSObject {
    id<ADAdServingDaemonConnectionDelegate> _delegate;
}

@property (retain, nonatomic) NSMutableArray *performWhenConnectedBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSXPCConnection *adServingDaemonConnection;
@property (weak, nonatomic) id<ADAdServingDaemonConnectionDelegate> delegate;

- (void)dealloc;
- (id)rpcProxyWithErrorHandler:(id /* block */)a0;
- (id)rpcProxy;
- (void)performWhenConnected:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (void)considerConnectingToAdServingDaemon;
- (void)_considerConnectingToAdServingDaemon;
- (void)invalidate;

@end

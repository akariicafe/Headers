@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue;

@interface NSXPCInvocation : NSObject <NSXPCConnectionDelegate> {
    NSXPCListenerEndpoint *_endpoint;
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
    BOOL _finishedWithError;
    id /* block */ _errorHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (id)initWithEndpoint:(id)a0 interface:(id)a1 queue:(id)a2;
- (id)initWithEndpoint:(id)a0 interface:(id)a1;

@end

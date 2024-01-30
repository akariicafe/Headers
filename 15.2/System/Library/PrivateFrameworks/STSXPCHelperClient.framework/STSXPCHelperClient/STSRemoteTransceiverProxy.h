@class NSXPCConnection;

@interface STSRemoteTransceiverProxy : NSObject

@property (retain, nonatomic) NSXPCConnection *xpc;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithListenerEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)transceive:(id)a0 outError:(id *)a1;
- (id)asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end

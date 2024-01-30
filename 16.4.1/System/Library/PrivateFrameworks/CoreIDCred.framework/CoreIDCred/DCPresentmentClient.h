@class DCXPCDisconnectHandler, NSString, NSXPCConnection;
@protocol DCPresentmentXPCProtocol;

@interface DCPresentmentClient : NSObject <DCPresentmentXPCProtocol>

@property (retain) NSXPCConnection *serverConnection;
@property (retain) id<DCPresentmentXPCProtocol> remoteObjectProxy;
@property (retain) DCXPCDisconnectHandler *disconnectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)buildCredentialResponseForSelection:(id)a0 completion:(id /* block */)a1;
- (void)buildErrorResponseWithStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)buildResponseForSelection:(id)a0 completion:(id /* block */)a1;
- (void)configureWithPartitions:(id)a0 presentmentType:(unsigned long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)generateTransportKeyForSpecification:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)interpretRequest:(id)a0 completion:(id /* block */)a1;

@end

@class DCXPCDisconnectionHandler, NSString, NSXPCConnection;
@protocol DCPresentmentXPCProtocol;

@interface DCPresentmentClient : NSObject <DCPresentmentXPCProtocol>

@property (retain) NSXPCConnection *serverConnection;
@property (retain) id<DCPresentmentXPCProtocol> remoteObjectProxy;
@property (retain) DCXPCDisconnectionHandler *disconnectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)configureWithPartitions:(id)a0 presentmentType:(unsigned long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)generateTransportKeyForSpecification:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)interpretRequest:(id)a0 completion:(id /* block */)a1;
- (void)buildResponseForSelection:(id)a0 completion:(id /* block */)a1;
- (void)buildErrorResponseWithStatus:(unsigned long long)a0 completion:(id /* block */)a1;

@end

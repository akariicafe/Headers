@class NSMutableDictionary, NSXPCInterface, NSObject, MTRDeviceControllerXPCProxyHandle;
@protocol OS_dispatch_queue;

@interface MTRDeviceControllerXPCConnection : NSObject

@property (readonly, nonatomic) NSXPCInterface *remoteDeviceServerProtocol;
@property (readonly, nonatomic) NSXPCInterface *remoteDeviceClientProtocol;
@property (readonly, nonatomic) id /* block */ connectBlock;
@property (weak, nonatomic) MTRDeviceControllerXPCProxyHandle *proxyHandle;
@property (retain, nonatomic) MTRDeviceControllerXPCProxyHandle *proxyRetainerForReports;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSMutableDictionary *reportRegistry;

+ (id)connectionWithWorkQueue:(id)a0 connectBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (void)handleReportWithController:(id)a0 nodeId:(unsigned long long)a1 values:(id)a2 error:(id)a3;
- (id)initWithWorkQueue:(id)a0 connectBlock:(id /* block */)a1;
- (void)deregisterReportHandlersWithController:(id)a0 nodeID:(id)a1 completion:(id /* block */)a2;
- (void)getProxyHandleWithCompletion:(id /* block */)a0;
- (void)registerReportHandlerWithController:(id)a0 nodeID:(id)a1 handler:(id /* block */)a2;

@end

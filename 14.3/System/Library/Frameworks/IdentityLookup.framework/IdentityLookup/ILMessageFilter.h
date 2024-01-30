@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ILMessageFilter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)performQueryRequest:(id)a0 completion:(id /* block */)a1;
- (void)performReportRequest:(id)a0 completion:(id /* block */)a1;
- (void)performClassificationReportRequest:(id)a0 completion:(id /* block */)a1;

@end

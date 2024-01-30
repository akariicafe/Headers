@class NSXPCConnection;

@interface CRCarKitServiceClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)serviceQueue;

- (void)_setupConnection;
- (void)_serviceQueuePerformBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performSynchronousServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

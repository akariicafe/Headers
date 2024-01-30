@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, TUReportingControllerXPCServer;

@interface TUReportingControllerXPCClient : NSObject <TUReportingControllerXPCServer, TUReportingControllerDataSource>

@property (class, retain, nonatomic) id<TUReportingControllerXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUReportingControllerXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *reportingControllerServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (id)serverWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (oneway void)registeredStream:(long long)a0 withAvailability:(int)a1 reply:(id /* block */)a2;
- (oneway void)didCleanUpForStream:(long long)a0 reply:(id /* block */)a1;
- (oneway void)didStartRequestForStream:(long long)a0 withTransactionID:(id)a1 reply:(id /* block */)a2;
- (oneway void)didReceiveResultsForStream:(long long)a0 withTransactionID:(id)a1 reply:(id /* block */)a2;

@end

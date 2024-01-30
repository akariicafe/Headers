@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, WBSHistoryConnectionProxyDelegate;

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy> {
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionProxyQueue;
@property (weak, nonatomic) id<WBSHistoryConnectionProxyDelegate> delegate;

- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)releaseCloudHistory:(id /* block */)a0;
- (id)init;
- (id)_createConnection;
- (void).cxx_destruct;
- (void)killService;
- (void)dealloc;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(id /* block */)a0;
- (void)beginHistoryAccessSession:(id /* block */)a0;
- (void)connectWithOptions:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginURLCompletionSession:(id /* block */)a0;
- (void)getServiceInfo:(id /* block */)a0;
- (void)debugGetDatabaseURLWithCompletionHandler:(id /* block */)a0;
- (id)queryMemoryFootprintWithError:(id *)a0;
- (void)disconnectWithCompletionHandler:(id /* block */)a0;
- (void)getVisitedLinksWithCompletionHandler:(id /* block */)a0;
- (void)queryMemoryFootprint:(id /* block */)a0;
- (void)_setupConnection;
- (void)initializeCloudHistoryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)ensureConnected:(id /* block */)a0;

@end

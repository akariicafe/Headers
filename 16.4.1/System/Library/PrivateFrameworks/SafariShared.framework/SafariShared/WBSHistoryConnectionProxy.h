@class NSXPCConnection, WBSHistoryService, NSObject;
@protocol OS_dispatch_queue, WBSHistoryConnectionProxyDelegate;

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy> {
    NSXPCConnection *_connection;
    WBSHistoryService *_inProcessFallbackService;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionProxyQueue;
@property (weak, nonatomic) id<WBSHistoryConnectionProxyDelegate> delegate;

- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)getServiceInfo:(id /* block */)a0;
- (void)debugGetDatabaseURLWithCompletionHandler:(id /* block */)a0;
- (void)connectWithOptions:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)queryMemoryFootprintWithError:(id *)a0;
- (void)queryMemoryFootprint:(id /* block */)a0;
- (void)dealloc;
- (void)initializeCloudHistoryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)ensureConnected:(id /* block */)a0;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)a0;
- (void)beginURLCompletionSession:(id /* block */)a0;
- (id)init;
- (void)releaseCloudHistory:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_createConnection;
- (void)beginHistoryAccessSession:(id /* block */)a0;
- (void)killService;
- (void)_setupConnectionWithInProcessFallback:(BOOL)a0;

@end

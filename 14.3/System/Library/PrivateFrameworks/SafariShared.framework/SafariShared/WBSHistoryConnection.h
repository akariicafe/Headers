@class WBSCloudHistory, WBSHistoryService, WBSHistoryServiceDatabase, NSObject, WBSCloudHistoryConfiguration;
@protocol OS_dispatch_queue;

@interface WBSHistoryConnection : NSObject <WBSHistoryConnectionProtocol> {
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSHistoryServiceDatabase *_database;
    WBSCloudHistory *_cloudHistory;
    WBSCloudHistoryConfiguration *_cloudHistoryConfiguration;
}

- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)releaseCloudHistory:(id /* block */)a0;
- (void).cxx_destruct;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginHistoryAccessSession:(id /* block */)a0;
- (id)initWithHistoryService:(id)a0;
- (void)connectWithOptions:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginURLCompletionSession:(id /* block */)a0;
- (void)getServiceInfo:(id /* block */)a0;
- (void)debugGetDatabaseURLWithCompletionHandler:(id /* block */)a0;
- (void)disconnectWithCompletionHandler:(id /* block */)a0;
- (void)getVisitedLinksWithCompletionHandler:(id /* block */)a0;
- (void)queryMemoryFootprint:(id /* block */)a0;
- (void)initializeCloudHistoryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)ensureConnected:(id /* block */)a0;

@end

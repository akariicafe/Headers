@class NSXPCConnection;

@interface WBSPasswordBreachHelperProxy : NSObject <WBSPasswordBreachHelperProtocol> {
    NSXPCConnection *_connection;
}

- (void)clearAllRecordsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)runLookupSessionIgnoringMinimumDelay:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getResultRecordDictionariesForResultQueryDictionaries:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(id /* block */)a0;
- (void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(id /* block */)a0;
- (void)addResultRecordDictionaries:(id)a0 completionHandler:(id /* block */)a1;

@end

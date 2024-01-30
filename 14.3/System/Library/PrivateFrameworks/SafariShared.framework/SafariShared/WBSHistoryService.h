@class WBSHistoryURLCompletionDataStore, NSString, WBSHistoryDatabaseAccessBroker, NSURL, NSDate, NSMutableDictionary, NSCountedSet, NSObject, NSXPCListener;
@protocol OS_dispatch_queue;

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_historyServiceQueue;
    NSMutableDictionary *_openedDatabases;
    NSCountedSet *_openedDatabasesRefCounts;
    NSDate *_initDate;
}

@property (readonly, nonatomic) WBSHistoryDatabaseAccessBroker *databaseAccessBroker;
@property (readonly, nonatomic) WBSHistoryURLCompletionDataStore *urlCompletionDataStore;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_openOrReuseExistingDatabaseWithOptions:(id)a0 error:(id *)a1;
- (id)_createListener;
- (void)connectWithOptions:(id)a0 connection:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_connectionIsEntitledToUseUserDatabase:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)disconnectDatabase:(id)a0 completionHandler:(id /* block */)a1;
- (void)resume;

@end

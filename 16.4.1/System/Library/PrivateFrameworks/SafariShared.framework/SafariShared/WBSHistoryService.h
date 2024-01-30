@class NSXPCListener, NSString, NSMapTable, WBSHistoryDatabaseAccessBroker, NSURL, NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_historyServiceQueue;
    NSObject<OS_dispatch_group> *_fileOperationGroup;
    NSMapTable *_databases;
    NSDate *_initDate;
}

@property (readonly, nonatomic) WBSHistoryDatabaseAccessBroker *databaseAccessBroker;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithListener:(id)a0;
- (id)_createListener;
- (BOOL)_connectionIsEntitledToUseUserDatabase:(id)a0;
- (id)_openOrReuseExistingDatabaseWithOptions:(id)a0 error:(id *)a1;
- (void)connectWithOptions:(id)a0 connection:(id)a1 completionHandler:(id /* block */)a2;

@end

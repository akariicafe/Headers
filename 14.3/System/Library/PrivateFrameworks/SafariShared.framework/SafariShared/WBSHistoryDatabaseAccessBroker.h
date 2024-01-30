@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistoryDatabaseAccessBroker : NSObject {
    NSURL *_historyDatabaseURL;
    NSObject<OS_dispatch_queue> *_writeRequestQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_requestAccessType:(long long)a0 onQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_requestReadOnlyAccessOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)_requestReadWriteAccessOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)databaseLastModifiedDate;
- (id)initWithHistoryDatabaseURL:(id)a0;
- (id)_openDatabaseWithAccessType:(long long)a0 onQueue:(id)a1 error:(id *)a2;
- (void)requestAccessType:(long long)a0 onQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestAccessType:(long long)a0 onQueue:(id)a1 completionHandlerWithInvalidationHandler:(id /* block */)a2;

@end

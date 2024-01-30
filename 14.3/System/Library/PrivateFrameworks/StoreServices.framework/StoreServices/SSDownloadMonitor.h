@class SSXPCConnection, NSObject;
@protocol SSDownloadMonitorDelegate, OS_dispatch_queue;

@interface SSDownloadMonitor : NSObject {
    SSXPCConnection *_connection;
    id<SSDownloadMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property id<SSDownloadMonitorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)_copyItemsWithReply:(id)a0 error:(id *)a1;
- (void)getMonitorItemsWithCompletionBlock:(id /* block */)a0;
- (void)pauseMonitorItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)prioritizeMonitorItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)resumeMonitorItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)_reloadForChangeNotification;

@end

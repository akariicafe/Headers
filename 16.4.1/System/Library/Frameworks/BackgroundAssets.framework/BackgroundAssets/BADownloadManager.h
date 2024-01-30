@class BAAgentClientProxy, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, BADownloadManagerDelegate;

@interface BADownloadManager : NSObject <BADownloadManagerSyncProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _scheduleLocked;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    BAAgentClientProxy *_proxy;
    NSString *_applicationIdentifier;
    NSMutableDictionary *_downloads;
}

@property (class, readonly) BADownloadManager *sharedManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<BADownloadManagerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)cancelDownload:(id)a0 error:(id *)a1;
- (void)downloadIdentifier:(id)a0 didFailWithError:(id)a1 wasHandled:(id /* block */)a2;
- (void)downloadIdentifier:(id)a0 didReceiveChallenge:(id)a1 authChallengeHandler:(id /* block */)a2;
- (void)downloadIdentifier:(id)a0 didWriteBytes:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)downloadIdentifierDidBegin:(id)a0;
- (void)downloadIdentifierDidFinish:(id)a0 sandboxExtensionToken:(id)a1 wasHandled:(id /* block */)a2;
- (void)downloadIdentifierDidPause:(id)a0;
- (id)fetchCurrentDownloads:(id *)a0;
- (void)fetchCurrentDownloadsWithCompletionHandler:(id /* block */)a0;
- (void)performWithExclusiveControl:(id /* block */)a0;
- (void)performWithExclusiveControlBeforeDate:(id)a0 performHandler:(id /* block */)a1;
- (void)removeDownloadIdentifier:(id)a0;
- (BOOL)scheduleDownload:(id)a0 error:(id *)a1;
- (BOOL)startForegroundDownload:(id)a0 error:(id *)a1;
- (void)syncDownloads:(id)a0;

@end

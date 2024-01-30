@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MPStoreDownloadExpectationController : NSObject <MPStoreDownloadManagerObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_source> *_dispatchSource;
    unsigned long long _downloadManagerMonitorCount;
    id /* block */ _searchBlock;
    double _timeout;
}

@property (copy, nonatomic) id /* block */ searchBlock;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)downloadManager:(id)a0 didAddDownloads:(id)a1 removeDownloads:(id)a2;
- (void)_attemptDownloadSearch;
- (void)_finishWithDownload:(id)a0 error:(id)a1;
- (void)_beginMonitoringDownloadManager;
- (void)_endMonitoringDownloadManager;

@end

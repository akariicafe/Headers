@class NSError, NSString, NSMutableDictionary, NSMutableSet, TSUBasicProgress, NSObject, TSUDownloadManager;
@protocol OS_dispatch_group, OS_dispatch_queue, TSUDownloadSessionDelegate;

@interface TSUDownloadSession : NSObject {
    TSUDownloadManager *_manager;
    id<TSUDownloadSessionDelegate> _delegate;
    BOOL _didFinishInitialization;
    NSObject<OS_dispatch_group> *_initializationGroup;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_remainingTasks;
    NSMutableDictionary *_taskProgress;
    double _lastProgressValue;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSError *_error;
}

@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) NSString *sessionDescription;
@property (readonly, nonatomic) TSUBasicProgress *progress;
@property (readonly, nonatomic) long long totalBytesDownloaded;
@property (readonly, nonatomic) long long totalBytesExpectedToBeDownloaded;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)didFinishInitialization;
- (void)cancelRemainingTasksNotifyingDelegate:(BOOL)a0;
- (void)headRequestForDownloadItem:(id)a0 taskProgress:(id)a1;
- (void)updateTaskProgress:(id)a0 withTotalBytesWritten:(long long)a1 totalBytesExpectedToWrite:(long long)a2;
- (void)updateProgressAndNotifyDelegate;
- (void)notifyCompletionWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)waitUntilTimeout:(unsigned long long)a0;
- (id)initWithManager:(id)a0 downloadItems:(id)a1 description:(id)a2 willRequestDownload:(BOOL)a3 delegate:(id)a4;
- (BOOL)hasActiveTaskWithDescription:(id)a0;
- (void)taskWithDescription:(id)a0 didCompleteWithError:(id)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)taskWithDescription:(id)a0 didWriteData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;

@end

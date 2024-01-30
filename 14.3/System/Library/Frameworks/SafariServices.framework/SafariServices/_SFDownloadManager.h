@class NSTimer, NSString, NSArray, NSURL, WBSCoalescedAsynchronousWriter, NSMutableArray, NSMapTable, _SFDownloadIconCache;
@protocol _SFDownloadDelegate;

@interface _SFDownloadManager : NSObject <_SFDownloadDelegate> {
    NSMutableArray *_downloads;
    NSURL *_downloadHistoryURL;
    WBSCoalescedAsynchronousWriter *_historyWriter;
    BOOL _loadedDownloadHistory;
    id /* block */ _blockToExecuteWhenDownloadHistoryIsLoaded;
    NSMapTable *_downloadsToDeferAdding;
    NSTimer *_removeDownloadsTimer;
    NSTimer *_updateTotalProgressTimer;
}

@property (readonly, nonatomic) NSURL *downloadsRootURL;
@property (weak, nonatomic) id<_SFDownloadDelegate> extraDownloadDelegate;
@property (readonly, copy, nonatomic) NSArray *downloads;
@property (readonly, nonatomic) _SFDownloadIconCache *iconCache;
@property (readonly, nonatomic) double totalProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadRepresentationsAtURL:(id)a0;
+ (id)sharedManager;
+ (id)defaultDownloadsHistoryURL;

- (void)removeDownloadsStartedAfterDate:(id)a0;
- (double)_calculateTotalProgress;
- (void).cxx_destruct;
- (void)downloadDidResume:(id)a0;
- (id)_dataForPersistingToHistory;
- (id)_busyDownloads;
- (void)downloadDidFail:(id)a0;
- (void)dealloc;
- (BOOL)shouldExcludeDownloadFromList:(id)a0;
- (void)_updateTotalProgress:(id)a0;
- (void)_removeOldDownloadsAndUpdateTimerIfNeeded;
- (void)savePendingChangesBeforeTermination;
- (void)reloadDownloadsSynchronously;
- (void)createDirectoryForDownload:(id)a0 completionHandler:(id /* block */)a1;
- (id)_containerDirectoryForDownload:(id)a0;
- (void)_loadDownloadHistory;
- (void)downloadDidImportFileToDownloadsFolder:(id)a0;
- (BOOL)shouldExcludeDownloadFromFileSystem:(id)a0;
- (BOOL)downloadShouldImportPlaceholderToDownloadsFolder:(id)a0;
- (void)removeDownloads:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)downloadDidStart:(id)a0;
- (void)downloadDidReceiveResponse:(id)a0;
- (id)initAsReadonly:(BOOL)a0;
- (void)_startUpdateTotalProgressTimerIfNeeded;
- (void)downloadShouldContinueAfterReceivingResponse:(id)a0 decisionHandler:(id /* block */)a1;
- (void)downloadContentsDidChange:(id)a0;
- (void)_addDownload:(id)a0;
- (void)deferAddingDownloadWhenStarted:(id)a0;
- (void)downloadDidFinish:(id)a0;
- (void)_noteDownloadsChanged;
- (void)_loadDownloadHistoryAsynchronous:(BOOL)a0;
- (void)getDownloadsWithCompletionHandler:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_removeDeletedDownloads;
- (void)downloadWillBeDeleted:(id)a0;
- (BOOL)_canExpireDownloadOnCompletion:(id)a0;

@end

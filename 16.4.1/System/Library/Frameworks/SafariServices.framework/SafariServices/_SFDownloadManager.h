@class NSDate, NSString, NSArray, WBSCoalescedAsynchronousWriter, NSURL, NSTimer, NSMutableArray, _SFDownloadIconCache, NSMapTable;
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
    long long _viewingDownloadsCount;
}

@property (retain, nonatomic, setter=_setLastUnviewedDownloadDate:) NSDate *_lastUnviewedDownloadDate;
@property (readonly, nonatomic) NSURL *downloadsRootURL;
@property (weak, nonatomic) id<_SFDownloadDelegate> extraDownloadDelegate;
@property (readonly, copy, nonatomic) NSArray *downloads;
@property (readonly, nonatomic) _SFDownloadIconCache *iconCache;
@property (readonly, nonatomic) double totalProgress;
@property (readonly, nonatomic) BOOL hasUnviewedDownloads;
@property (readonly, nonatomic) unsigned long long runningDownloadsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDownloadsHistoryURL;
+ (id)downloadRepresentationsAtURL:(id)a0;
+ (id)sharedManager;

- (void)savePendingChangesBeforeTermination;
- (void)_updateTotalProgress:(id)a0;
- (id)_containerDirectoryForDownload:(id)a0;
- (void)downloadDidReceiveResponse:(id)a0;
- (void)didEndViewingDownloads;
- (void)_applicationDidEnterBackground:(id)a0;
- (id)_dataForPersistingToHistory;
- (void)downloadDidImportFileToDownloadsFolder:(id)a0;
- (void)downloadDidFinish:(id)a0;
- (void)downloadContentsDidChange:(id)a0;
- (BOOL)_canExpireDownloadOnCompletion:(id)a0;
- (void)_addDownload:(id)a0;
- (id)initAsReadonly:(BOOL)a0;
- (void)removeDownloads:(id)a0;
- (BOOL)shouldExcludeDownloadFromFileSystem:(id)a0;
- (void)createDirectoryForDownload:(id)a0 completionHandler:(id /* block */)a1;
- (void)_noteDownloadsChanged;
- (void)deferAddingDownloadWhenStarted:(id)a0;
- (void)downloadDidResume:(id)a0;
- (void)getDownloadsWithCompletionHandler:(id /* block */)a0;
- (double)_calculateTotalProgress;
- (void)dealloc;
- (BOOL)downloadShouldImportPlaceholderToDownloadsFolder:(id)a0;
- (void)_startUpdateTotalProgressTimerIfNeeded;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_loadDownloadHistoryAsynchronous:(BOOL)a0;
- (BOOL)shouldExcludeDownloadFromList:(id)a0;
- (void)_loadDownloadHistory;
- (void)setHasUnviewedDownloads:(BOOL)a0;
- (void)downloadDidFail:(id)a0;
- (void)_removeDeletedDownloads;
- (void)_removeOldDownloadsAndUpdateTimerIfNeeded;
- (void)reloadDownloadsSynchronously;
- (void)downloadDidStart:(id)a0;
- (void)downloadWillBeDeleted:(id)a0;
- (void)didBeginViewingDownloads;
- (void)downloadShouldContinueAfterReceivingResponse:(id)a0 decisionHandler:(id /* block */)a1;
- (void)_setHasUnviewedDownloadsIfNeeded;
- (void)removeDownloadsStartedAfterDate:(id)a0;
- (id)_busyDownloads;
- (void).cxx_destruct;

@end

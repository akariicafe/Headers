@protocol SSBookDownloadQueue;

@interface SSDownloadManagerBookShim : SSDownloadManagerAppShim {
    id<SSBookDownloadQueue> _downloadQueue;
}

- (void)cancelDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)moveDownload:(id)a0 beforeDownload:(id)a1 completionBlock:(id /* block */)a2;
- (void)restartDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithManagerOptions:(id)a0;
- (void)_pauseDownloads:(id)a0 forced:(BOOL)a1 completionBlock:(id /* block */)a2;
- (id)_copyDownloadsForMessage:(long long)a0 downloadIDs:(id)a1;
- (void)resumeDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)moveDownload:(id)a0 afterDownload:(id)a1 completionBlock:(id /* block */)a2;
- (void)_sendDownloadsChanged:(id)a0;
- (void)__book_sendDownloadsChanged:(id)a0 filterBooks:(BOOL)a1;
- (void)__book_pauseDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)__book_resumeDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)__book_dispatchBlock:(id /* block */)a0 withError:(id)a1;
- (id)__book_downloadsForStati:(id)a0 overrideFinished:(BOOL)a1 overrideFailed:(BOOL)a2;
- (void)__book_filterDownloads:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)__book_getAllDownloads;
- (void)__book_cancelDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)downloadQueue:(id)a0 downloadStatesDidChange:(id)a1;
- (void)downloadQueue:(id)a0 downloadStates:(id)a1 didCompleteWithError:(id)a2;
- (id)bookDownloads;

@end

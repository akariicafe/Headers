@class NSString, ASDJobManager;

@interface SSDownloadManagerAppShim : SSDownloadManager <ASDJobManagerObserver> {
    ASDJobManager *_jobManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (id)_copyDownloadsForMessage:(long long)a0 downloadIDs:(id)a1;
- (void)_insertDownloads:(id)a0 before:(id)a1 after:(id)a2 completionBlock:(id /* block */)a3;
- (void)cancelAllDownloadsWithCompletionBlock:(id /* block */)a0;
- (void)jobManager:(id)a0 updatedProgressOfJobs:(id)a1;
- (void)restartDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)setDownloads:(id)a0 forKinds:(id)a1 completionBlock:(id /* block */)a2;
- (id)initWithManagerOptions:(id)a0;
- (void)_sendDownloadsChanged:(id)a0;
- (void)_pauseDownloads:(id)a0 forced:(BOOL)a1 completionBlock:(id /* block */)a2;
- (id)__app_extractJobIDsFromSoftwareDownloads:(id)a0;
- (void)moveDownload:(id)a0 beforeDownload:(id)a1 completionBlock:(id /* block */)a2;
- (void)finishDownloads:(id)a0;
- (void)resumeDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)moveDownload:(id)a0 afterDownload:(id)a1 completionBlock:(id /* block */)a2;
- (id)__app_downloadsForJobs:(id)a0;
- (void)jobManager:(id)a0 updatedStateOfJobs:(id)a1;
- (void)__app_filterDownloads:(id)a0 withResult:(id /* block */)a1;
- (void)jobManager:(id)a0 changedJobs:(id)a1;
- (void)__app_insertDownloads:(id)a0 before:(id)a1 after:(id)a2 completionBlock:(id /* block */)a3;
- (void)__app_dispatchBlock:(id /* block */)a0 withError:(id)a1;
- (id)__app_convertOptions:(id)a0;
- (void)__app_setPropertiesForActivity:(id)a0 withDownload:(id)a1;
- (void)__app_finishDownloads:(id)a0;
- (id)__app_newActivityWithDownload:(id)a0;
- (void)__app_installManifest:(id)a0 completionBlock:(id /* block */)a1;
- (id)__app_newAssetWithDownloadAsset:(id)a0 assetType:(id)a1;
- (void)__app_sendDownloadsChanged:(id)a0 filterSoftware:(BOOL)a1;
- (void)__app_cancelDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)__app_newManifestWithType:(long long)a0;
- (void)__app_pauseDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (void)__app_resumeDownloads:(id)a0 completionBlock:(id /* block */)a1;
- (id)__app_getAllDownloads;

@end

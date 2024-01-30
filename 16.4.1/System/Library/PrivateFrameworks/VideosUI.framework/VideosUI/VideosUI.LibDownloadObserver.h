@interface VideosUI.LibDownloadObserver : NSObject <MPMediaDownloadObserver, VUIDownloadManagerDelegate> {
    void /* unknown type, empty encoding */ _hasDownloadInProgress;
    void /* unknown type, empty encoding */ downloadObservationCallbackMap;
    void /* unknown type, empty encoding */ ssDownloadManager;
}

- (void)downloadManager:(id)a0 didEnqueueAssetDownloads:(id)a1 didRemoveAssetDownloads:(id)a2;
- (void)downloadManagerDownloadsDidChange:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end

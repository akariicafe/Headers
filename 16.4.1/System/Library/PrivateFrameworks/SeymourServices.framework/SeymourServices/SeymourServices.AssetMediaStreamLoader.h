@interface SeymourServices.AssetMediaStreamLoader : NSObject <AVAssetDownloadDelegate> {
    void /* unknown type, empty encoding */ assetFileStore;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ persistenceStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userInitiatedSession;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemPrefetchSession;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ tasks;
}

- (void)URLSession:(id)a0 aggregateAssetDownloadTask:(id)a1 didLoadTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 totalTimeRangesLoaded:(id)a3 timeRangeExpectedToLoad:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 forMediaSelection:(id)a5;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 aggregateAssetDownloadTask:(id)a1 willDownloadToURL:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end

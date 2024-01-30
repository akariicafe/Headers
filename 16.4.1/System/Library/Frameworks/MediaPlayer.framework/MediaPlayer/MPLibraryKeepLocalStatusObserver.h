@class MPLibraryKeepLocalStatusObserverConfiguration, NSString, NSSet;

@interface MPLibraryKeepLocalStatusObserver : NSObject <MPMediaDownloadObserver> {
    NSSet *_activeDownloads;
    NSSet *_pausedDownloads;
}

@property (retain, nonatomic) MPLibraryKeepLocalStatusObserverConfiguration *configuration;
@property (readonly, nonatomic) struct MPLibraryActiveKeepLocalStatus { long long statusType; double downloadProgress; } currentStatus;
@property (readonly, nonatomic) unsigned long long downloadPausedReason;
@property (copy, nonatomic) id /* block */ statusBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadManager:(id)a0 didUpdateDownloadProgress:(id)a1;
- (void)_transientStateDidChangeNotification:(id)a0;
- (void)downloadManager:(id)a0 didEnqueueAssetDownloads:(id)a1 didRemoveAssetDownloads:(id)a2;
- (void)_updateCurrentStatus;
- (struct MPLibraryActiveKeepLocalStatus { long long x0; double x1; })_calculateCurrentStatus;
- (void)dealloc;
- (BOOL)_updateActiveDownloadsAllowingDownloadRemoval:(BOOL)a0;
- (id)init;
- (void)downloadManager:(id)a0 didChangeDownloadPausedReasonForAssets:(id)a1;
- (void).cxx_destruct;
- (void)_handleDownloadStateChanged:(id)a0;

@end

@class NSString, NSMapTable, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPStreamingDownloadSessionController : NSObject <ICEnvironmentMonitorObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_assetDownloadSessionToDownloadSession;
    NSMapTable *_assetDownloadSessionToPlaybackMetadata;
    NSMutableArray *_assetDownloadSessionsPendingStart;
    unsigned long long _pausingAllDownloadsTransactionCount;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { unsigned long long *__value_; } __end_cap_; } _prioritizedDownloadTokens;
    NSOperationQueue *_streamingOperationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDownloadSessionController;

- (id)_newDownloadSessionForRequest:(id)a0 sourceURL:(id)a1 downloadKey:(id)a2 sinfs:(id)a3 pathExtension:(id)a4 assetFlavor:(id)a5 allowAssetCaching:(BOOL)a6 allowITunesContentConfiguration:(BOOL)a7 protectionType:(unsigned long long)a8 returningAssetDownloadSession:(id *)a9;
- (id)init;
- (void).cxx_destruct;
- (void)beginPausingAllDownloadSessions;
- (void)endPausingAllDownloadSessions;
- (void)acquireDownloadSessionWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)releaseDownloadSession:(id)a0;
- (void)startDownloadSession:(id)a0;
- (void)_assetDownloadSessionDownloadFailedNotification:(id)a0;
- (void)_assetDownloadSessionDownloadSucceededNotification:(id)a0;
- (void)_assetDownloadSessionFileSizeAvailableNotification:(id)a0;
- (id)_assetDownloadSessionForDownloadSession:(id)a0;
- (void)_playbackItemMetadataNetworkConstraintsDidChangeNotification:(id)a0;
- (unsigned long long)_assetQualityForAssetFlavor:(id)a0;
- (void)_auditAssetDownloadSession:(id)a0 withNetworkConstraints:(id)a1;
- (id)_downloadKeyCookieWithValue:(id)a0 URL:(id)a1;
- (void)_auditNetworkConstraintsForAssetDownloadSession:(id)a0 playbackItemMetadata:(id)a1;
- (void)_postFailedForDownloadSession:(id)a0;
- (void)_getNetworkConstraintsForPlaybackItemMetadata:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_unregisterDownloadSession:(id)a0;
- (void)_handleNewDownloadSession:(id)a0 withAssetDownloadSession:(id)a1 forPlaybackItemMetadata:(id)a2;
- (id)_sinfsByCleaningSinfs:(id)a0;
- (void)_handlePrioritizationForFinishingAssetDownloadSession:(id)a0;
- (void)_postFailedForDownloadSession:(id)a0 withError:(id)a1;
- (id)_preferredAssetFlavorsForAssetQuality:(unsigned long long)a0;
- (void)_removeFileForAssetDownloadSession:(id)a0 playbackItemMetadata:(id)a1;
- (void)_registerForNotificationsForAssetDownloadSession:(id)a0;
- (void)_registerForNotificationsForPlaybackItemMetadata:(id)a0;
- (void)_unregisterForNotificationsForAssetDownloadSession:(id)a0;
- (void)_unregisterForNotificationsForPlaybackItemMetadata:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)beginPrioritizingDownloadSession:(id)a0;
- (void)endPrioritizingDownloadSession:(id)a0;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;

@end

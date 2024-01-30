@class NSArray, AVAssetDownloadSessionInternal, NSURL, NSError, AVMediaSelection;

@interface AVAssetDownloadSession : NSObject {
    AVAssetDownloadSessionInternal *_internal;
}

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) unsigned long long availableFileSize;
@property (readonly, nonatomic) unsigned long long countOfBytesReceived;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) NSArray *loadedTimeRanges;
@property (readonly, nonatomic) AVMediaSelection *resolvedMediaSelection;

+ (id)assetDownloadSessionWithAsset:(id)a0 mediaSelections:(id)a1 destinationURL:(id)a2 options:(id)a3;
+ (void)registerDownloadLocation:(id)a0 forURLAsset:(id)a1;
+ (id)assetDownloadSessionWithURL:(id)a0 destinationURL:(id)a1 options:(id)a2;
+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)a0;
+ (id)assetDownloadSessionWithAsset:(id)a0 destinationURL:(id)a1 options:(id)a2;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)_sendLoadedTimeRangesChangedToDelegateWithNewlyLoadedTimeRange:(id)a0 currentLoadedTimeRanges:(id)a1 timeRangeExpectedToLoad:(id)a2 selectedMediaArray:(id)a3;
- (struct OpaqueFigAsset { } *)_figAsset;
- (id)init;
- (void)dealloc;
- (void)stop;
- (int)_primeCache;
- (void)pause;
- (id)_common_init;
- (id)_startOnQueue;
- (int)_setFileFigAsset:(struct OpaqueFigAsset { } *)a0;
- (void)_setupFigClientObjectAsync:(id)a0;
- (void)_removeFigAssetListeners;
- (void)_removeFigPlaybackItemListeners;
- (id)initWithURL:(id)a0 destinationURL:(id)a1 options:(id)a2;
- (id)initWithDownloadToken:(unsigned long long)a0;
- (id)initWithAsset:(id)a0 mediaSelections:(id)a1 destinationURL:(id)a2 options:(id)a3;
- (void)_transitionToTerminalStatus:(long long)a0 error:(id)a1;
- (void)_startLoadingMetadataOnQueue;
- (void)startLoadingMetadata;
- (void)_downloadSuccessCallback;
- (void)_sendDownloadFailureToDelegateWithError:(id)a0;
- (void)_sendDownloadSuccessToDelegate;
- (void)_sendDidResolveMediaSelectionWithMediaSelection:(id)a0;
- (void)_addFigAssetListeners;
- (void)_addFigPlaybackItemListeners;
- (void)_sendDidFinishDownloadForMediaSelectionWithMediaSelection:(id)a0;
- (struct OpaqueFigAsset { } *)_createDuplicateFigAssetFromAVAsset:(id)a0;
- (void)_transitionToTerminalStatusForDelegateCallbacksWithStatus:(long long)a0 error:(id)a1;
- (void)_downloadFailureCallbackWithError:(id)a0;
- (id)_setupFigClientObjectForStreaming:(id)a0;
- (id)_setupFigClientObjectForFileDownload:(id)a0;
- (id)_startOnQueueFirstTime;
- (void)_transitionToTerminalStatusAsync:(long long)a0 error:(id)a1;
- (id)_verifyDownloadConfigurationForAssetType;
- (int)_readyForInspection;
- (id)_figAssetNotificationNames;
- (id)_figPlaybackItemNotificationNames;
- (void)_primeCacheOnDispatchQueue;
- (id)_loadedTimeRangesFromFigLoadedTimeRanges:(id)a0;
- (id)_errorFromAssetNotificationPayload:(id)a0;
- (void)start;
- (id)_weakReference;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { } *)a0 key:(struct __CFString { } *)a1;

@end

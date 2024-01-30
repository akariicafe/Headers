@class NSError, NSString, ISAsset, AVPlayerItem, AVAssetImageGenerator, ISPlayerContent, NSObject, AVVideoComposition, NSNumber;
@protocol OS_dispatch_queue;

@interface ISPlayerItem : ISObservable {
    void *_ivarQueueIdentifier;
    void *_workQueueIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _ivarQueue_loadingTarget;
    AVVideoComposition *_ivarQueue_videoComposition;
    long long _ivarQueue_videoPlayerItemRequestID;
    BOOL _ivarQueue_aggressivelyCacheVideoFrames;
    BOOL _ivarQueue_reversesMoreVideoFramesInMemory;
    BOOL _ivarQueue_decodesAllFramesDuringOrdinaryPlayback;
    BOOL _ivarQueue_contentSupportsVitality;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _ivarQueue_playerItemPhotoTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _ivarQueue_playerItemDuration;
    ISPlayerContent *_ivarQueue_playerContent;
    long long _ivarQueue_status;
    AVPlayerItem *_ivarQueue_videoPlayerItem;
    NSNumber *_ivarQueue_variationIdentifier;
    NSString *_ivarQueue_minimumClientVersion;
    NSError *_ivarQueue_error;
    struct { BOOL videoPlayerItem; BOOL status; BOOL content; BOOL minimumClientVersion; BOOL playbackStyleIdentifier; BOOL contentSupportsVitality; } _ivarQueue_isValid;
    AVAssetImageGenerator *_workQueue_imageGenerator;
    BOOL _workQueue_isGeneratingOffsetImage;
}

@property (class, readonly, nonatomic) long long currentClientVersion;

@property (nonatomic, setter=_setStatus:) long long status;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (retain, nonatomic, setter=_setPlayerContent:) ISPlayerContent *playerContent;
@property (nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) BOOL _loadingCancelled;
@property (nonatomic, setter=_setVideoPlayerItemRequestID:) long long _videoPlayerItemRequestID;
@property (retain, nonatomic, setter=_setVariationIdentifier:) NSNumber *_variationIdentifier;
@property (retain, nonatomic, setter=_setMinimumClientVersion:) NSString *_minimumClientVersion;
@property (nonatomic) BOOL contentSupportsVitality;
@property (nonatomic) BOOL reversesMoreVideoFramesInMemory;
@property (nonatomic) BOOL aggressivelyCacheVideoFrames;
@property (nonatomic) BOOL decodesAllFramesDuringOrdinaryPlayback;
@property (readonly, nonatomic) ISAsset *asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) long long loadingTarget;
@property (copy, nonatomic) AVVideoComposition *videoComposition;

+ (id)playerItemWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)cancelLoading;
- (void)_invalidatePlayerContent;
- (void)_updatePlayerContentIfNeeded;
- (id)initWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)init;
- (void)_cancelLoading;
- (void)dealloc;
- (void)_invalidateStatus;
- (void)_updateStatusIfNeeded;
- (void)_performIvarRead:(id /* block */)a0;
- (void)_performIvarWrite:(id /* block */)a0;
- (BOOL)_isOnIvarQueue;
- (id)_videoPlayerItem;
- (void)resetAVObjects;
- (void)discardContentBelowLoadingTarget;
- (void)_reloadAllContent;
- (void)_invalidateMinimumClientVersion;
- (BOOL)_isMinimumClientVersionValid;
- (void)_updateMinimumClientVersionIfNeeded;
- (void)_invalidatePlaybackStyleIdentifier;
- (BOOL)_isPlaybackStyleIdentifierValid;
- (void)_updatePlaybackStyleIdentifierIfNeeded;
- (BOOL)_isContentSupportsVitalityValid;
- (void)_invalidateContentSupportsVitality;
- (void)_updateContentSupportsVitalityIfNeeded;
- (void)_invalidateVideoPlayerItem;
- (BOOL)_isVideoPlayerItemValid;
- (void)_updateVideoPlayerItemIfNeeded;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)a0 playerItem:(id)a1 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id)a3;
- (void)_setVideoPlayerItem:(id)a0 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)_isPlayerContentValid;
- (BOOL)_isStatusVaild;
- (void)_performWork:(id /* block */)a0 sync:(BOOL)a1;
- (void)_performWork:(id /* block */)a0;
- (BOOL)_isOnWorkQueue;
- (void)_assertOnWorkQueue;
- (void)_assertOnIvarQueue;

@end

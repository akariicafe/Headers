@class AVPlayerItem, ISWrappedAVPlayer, ISWrappedAVAudioSession, NSString, NSNumber, PXVideoPlayerView;

@interface PXDisplayAssetLoopingVideoUIView : PXDisplayAssetUIView <PXActivityCoordinatorItem> {
    PXVideoPlayerView *_videoView;
    long long _requestID;
    unsigned long long _loadingIntervalID;
    unsigned long long _playbackIntervalID;
    id _timeObserver;
}

@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (retain, nonatomic) AVPlayerItem *videoPlayerItem;
@property (nonatomic) BOOL canLoadVideo;
@property (retain, nonatomic) NSNumber *queuePosition;
@property (retain, nonatomic) ISWrappedAVAudioSession *audioSession;
@property (nonatomic) double videoLoadingProgress;
@property (nonatomic) unsigned long long activityCoordinatorQueuePosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContent;
- (double)loadingProgress;
- (id)currentImage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)imageProgressDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (BOOL)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentContentsRect;
- (void)animatedContentEnabledDidChange;
- (void)contentModeDidChange;
- (long long)playbackStyle;
- (void)_unloadVideo;
- (void)_handleDidShowPlaceholderForUnloadingPlayerItem:(id)a0;
- (void)_loadVideo;
- (void)_handlePlayerItemResult:(id)a0 info:(id)a1 requestID:(long long)a2;
- (void)_updateVideoPlayerPlayerItem;
- (void)_handleVideoPlayerTimeObserverWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_updateVideoViewPlaceholderFilters;
- (void)_endPlaybackInterval;
- (void)_endLoadingInterval:(BOOL)a0;
- (void)_updateVideoViewContentMode;
- (id)contentView;
- (void)imageDidChange;

@end

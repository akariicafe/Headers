@class PXAssetAnalyzer, PUBrowsingVideoPlayer, NSString, NSMutableDictionary, PXAssetMetadataDonator, PUBrowsingViewModel;
@protocol PUDisplayAsset;

@interface PUOneUpEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUOneUpEventTracker>

@property (nonatomic) BOOL isSessionActive;
@property (nonatomic) long long sessionSignpost;
@property (readonly, nonatomic) double currentlyViewedAssetTimestamp;
@property (readonly, nonatomic) long long currentlyViewedAssetGeneration;
@property (nonatomic) long long currentAssetSignpost;
@property (nonatomic) long long currentAssetDisplayIntervalSignpost;
@property (readonly, nonatomic) PXAssetAnalyzer *assetAnalyzer;
@property (readonly, nonatomic) PXAssetMetadataDonator *assetMetadataDonator;
@property (retain, nonatomic) PUBrowsingVideoPlayer *currentVideoPlayer;
@property (readonly, nonatomic) id<PUDisplayAsset> currentVideoAsset;
@property (retain, nonatomic) id<PUDisplayAsset> currentlyPlayingVideoAsset;
@property (readonly, nonatomic) double currentlyPlayingVideoAssetTimestamp;
@property (retain, nonatomic) id<PUDisplayAsset> currentlyStreamingVideoAsset;
@property (nonatomic) BOOL currentlyStreamingVideoIsActuallyPlaying;
@property (nonatomic) BOOL currentlyStreamingVideoIsStalled;
@property (nonatomic) long long currentlyStreamingVideoStallsCount;
@property (nonatomic) BOOL currentlyStreamingVideoDidStartActualPlayback;
@property (nonatomic) long long currentlyPlayingLivePhotoSignpost;
@property (nonatomic) long long currentlyPlayingVideoSignpost;
@property (nonatomic) long long currentlyPlayingStreamedVideoSignpost;
@property (nonatomic) long long currentlyPlayingStreamedVideoStartSignpost;
@property (readonly, nonatomic) PUBrowsingViewModel *viewModel;
@property (readonly, nonatomic) long long presentationOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSMutableDictionary *payload;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_updateCurrentVideoProperties;
- (void)logDidEndViewingMedia:(id)a0 mediaKind:(long long)a1 duration:(double)a2;
- (void)_logDidStartPlaybackOfStreamedVideoAsset:(id)a0;
- (id)initWithViewModel:(id)a0 presentationOrigin:(long long)a1;
- (void)_updateCurrentlyViewedAsset;
- (void)_logDidStartPlayingVideoAsset:(id)a0;
- (void)setDisplayedAsset:(id)a0;
- (void)logUserWillPlayLivePhoto:(id)a0;
- (void)_invalidateCurrentVideoProperties;
- (void)_logDidEndSession;
- (void)_logDidStartSession;
- (void)_invalidateCurrentVideoPlayer;
- (void)_invalidateIsSessionActive;
- (void)logUserDidPlayLivePhoto:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)logDidStartViewingMedia:(id)a0 mediaKind:(long long)a1;
- (void)_logDidStartActualPlaybackOfStreamedVideoAsset:(id)a0;
- (void)_updateIsSessionActive;
- (void)_logWillEndPlaybackOfStreamedVideoAsset:(id)a0;
- (void)logVitalityDidEndForLivePhoto:(id)a0;
- (void)_logDidEndPlayingVideoAsset:(id)a0 duration:(double)a1;
- (void)_handleLongEnoughViewDurationWithGeneration:(long long)a0;
- (id)initWithViewName:(id)a0;
- (void)_invalidateCurrentlyViewedAsset;
- (void)_updateCurrentVideoPlayer;

@end

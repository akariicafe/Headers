@class PXAssetAnalyzer, NSString, PUBrowsingVideoPlayer, NSMutableDictionary, PXAssetMetadataDonator, PUBrowsingViewModel;
@protocol PUDisplayAsset;

@interface PUOneUpEventTracker : PXViewControllerEventTracker <PXChangeObserver, PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUOneUpEventTracker>

@property (readonly, nonatomic) NSString *viewClassName;
@property (nonatomic) BOOL isSessionActive;
@property (nonatomic) long long sessionSignpost;
@property (retain, nonatomic) id<PUDisplayAsset> currentlyViewedAsset;
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

- (void)logVitalityDidEndForLivePhoto:(id)a0;
- (void)_logDidStartSession;
- (id)init;
- (void).cxx_destruct;
- (void)_logDidEndViewingAsset:(id)a0 duration:(double)a1;
- (void)logUserDidPlayLivePhoto:(id)a0;
- (void)_updateCurrentVideoProperties;
- (void)logAppliedEffectSuggestion:(id)a0 toLivePhoto:(id)a1;
- (void)_invalidateIsSessionActive;
- (void)_logWillEndPlaybackOfStreamedVideoAsset:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_updateCurrentVideoPlayer;
- (void)_invalidateCurrentVideoPlayer;
- (void)logUserWillPlayLivePhoto:(id)a0;
- (void)_handleLongEnoughViewDurationWithGeneration:(long long)a0;
- (void)_logDidStartActualPlaybackOfStreamedVideoAsset:(id)a0;
- (void)_updateCurrentlyViewedAsset;
- (void)_logDidStartPlayingVideoAsset:(id)a0;
- (id)initWithViewModel:(id)a0 presentationOrigin:(long long)a1;
- (void)_updateIsSessionActive;
- (void)_invalidateCurrentlyViewedAsset;
- (void)_logDidEndSession;
- (void)_invalidateCurrentVideoProperties;
- (void)_logDidStartPlaybackOfStreamedVideoAsset:(id)a0;
- (void)_logDidStartViewingAsset:(id)a0;
- (void)_logDidEndPlayingVideoAsset:(id)a0 duration:(double)a1;

@end

@class NSCache, NSString, HMCameraProfile, NSArray, CALayer, NSMutableDictionary, AVPlayerLayer, HMCameraClip, AVPlayer;

@interface HUCameraTimelapseController : NSObject <HMCameraClipManagerObserver, HUTimelapseClipDataSource, HFCameraTimelapseVideoDownloaderDelegate>

@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) HMCameraClip *currentClip;
@property (nonatomic, getter=isSeekingToTime) BOOL seekingToTime;
@property (retain, nonatomic) NSMutableDictionary *cachedVideos;
@property (retain, nonatomic) NSCache *cachedPlayerItems;
@property (retain, nonatomic) HMCameraClip *highQualityClip;
@property (nonatomic, getter=isSeekInProgress) BOOL seekInProgress;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } chaseTime;
@property (nonatomic) long long playerItemStatus;
@property (nonatomic, getter=isPlayingHLSPlayerItem) BOOL playingHLSPlayerItem;
@property (nonatomic) unsigned long long downloadState;
@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly, nonatomic) CALayer *imageLayer;
@property (readonly, nonatomic) NSArray *timelapseClips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)actuallySeekToTime;
- (void).cxx_destruct;
- (void)seekToDate:(id)a0;
- (id)initWithCameraProfile:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })cmTimeFromDate:(id)a0;
- (void)_fallbackToHighQualityClip:(id)a0;
- (void)_hideAllTimelapseLayers;
- (void)_loadPlayerForTimelapseClip:(id)a0 atLocation:(id)a1;
- (void)_loadPlayerFromLocation:(id)a0;
- (void)_showOnlyImageLayer;
- (void)_showOnlyPlayerLayer;
- (void)_updateTimelapseClip:(id)a0 withHighQualityClip:(id)a1;
- (BOOL)canSeekWithClip:(id)a0;
- (void)didDownloadVideoFileForTimelapseClip:(id)a0 atLocation:(id)a1;
- (void)failedToDownloadVideoFileForTimelapseClip:(id)a0;
- (void)foundVideoFileForTimelapseClip:(id)a0 atLocation:(id)a1;
- (void)hideAllViews;
- (void)pauseTimelapseScrubbing;
- (id)playerItemForURL:(id)a0;
- (void)resetForNewCamera;
- (void)setTimelapseVisibility:(BOOL)a0;
- (void)trySeekToChaseTime;
- (void)updatePlaceholderContent;
- (void)updateToPlaybackPosition:(id)a0 forHighQualityClip:(id)a1;
- (void)updateVideoBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@class NSMutableArray, _PXTrimToolPlayerWrapperAVPlayerView, NSArray, NSString, NUMediaView, AVPlayer;
@protocol PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource, PXTrimToolPlayerObserver, NUMediaPlayer;

@interface PXTrimToolPlayerWrapperNUMediaView : NSObject <PXTrimToolPlayerWrapper> {
    struct { BOOL respondsToPlayerStatusChangedForPlayerWrapper; BOOL respondsToTimeChanged; } _delegateFlags;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _trimRange;
}

@property (readonly, nonatomic) NUMediaView *mediaView;
@property (retain, nonatomic) id<NUMediaPlayer> mediaPlayer;
@property (readonly, nonatomic) AVPlayer *_currentAVPlayer;
@property (retain, nonatomic) NSMutableArray *mediaViewObservers;
@property (retain, nonatomic) id mediaViewTimeObserver;
@property (retain, nonatomic) _PXTrimToolPlayerWrapperAVPlayerView *loupePlayerView;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (nonatomic) BOOL didPlayBeforeSeek;
@property (nonatomic) BOOL didLoopVideoBeforeSeek;
@property (copy, nonatomic) NSArray *pipelineFiltersBeforeSeek;
@property (weak, nonatomic) id<PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource> playerItemSource;
@property (copy, nonatomic) NSArray *fullVideoPipelineFilters;
@property (nonatomic) BOOL showsUntrimmed;
@property (weak, nonatomic) id<PXTrimToolPlayerObserver> playerObserver;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } trimRange;
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)play;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestPlayerItemWithCompletion:(id /* block */)a0;
- (void)applyTrimTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)stopPeriodicTimeObserver;
- (void)startPeriodicTimeObserver;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 untrimmed:(BOOL)a1 exact:(BOOL)a2;
- (void)pause;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_updateLoupePlayerView;
- (void)_registerDefaultMediaViewObserver;
- (void)_registerTimeMediaViewObserver;
- (void)_removeMediaPlayerObserver;
- (void)_removeTimeObserver;
- (void)_handleMediaPlayerObserverMediaChanged;
- (void)setPosterFrame:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_handleMediaPlayerObserverTimeChanged:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_handleMediaPlayerObserverStatusChanged:(long long)a0;
- (void)setShowsUntrimmed:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithNUMediaView:(id)a0;
- (void)invalidateComposition;

@end

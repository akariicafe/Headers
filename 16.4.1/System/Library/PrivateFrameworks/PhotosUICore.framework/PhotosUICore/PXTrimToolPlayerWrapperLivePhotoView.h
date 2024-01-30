@class NSString, ISWrappedAVPlayer, ISVideoPlayerUIView, UIView;
@protocol PXTrimToolPlayerObserver, PXLivePhotoView;

@interface PXTrimToolPlayerWrapperLivePhotoView : NSObject <ISChangeObserver, PXTrimToolPlayerWrapper> {
    struct { BOOL respondsToPlayerStatusChangedForPlayerWrapper; BOOL respondsToTimeChanged; } _delegateFlags;
}

@property (retain, nonatomic) ISWrappedAVPlayer *wrappedAVPlayer;
@property (readonly, nonatomic) id<PXLivePhotoView> livePhotoView;
@property (nonatomic) BOOL needsPlayerUpdate;
@property (retain, nonatomic) ISVideoPlayerUIView *_videoPlayerView;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } periodicTimeObservationInterval;
@property (retain, nonatomic) id periodicTimeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXTrimToolPlayerObserver> playerObserver;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } trimRange;
@property (readonly, nonatomic) UIView *loupePlayerView;
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;

- (void)pause;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (void)play;
- (void)invalidateComposition;
- (void)_loadWrappedAVPlayerIfNecessary;
- (id)videoPlayerView;
- (void)_addPeriodicTimeObserver;
- (void)_createLoupePlayerView;
- (void)_timeObserverTimeChanged:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_videoPlayerViewIfLoaded;
- (void)applyTrimTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)finishSeeking;
- (id)initWithLivePhotoView:(id)a0;
- (void)requestPlayerItemWithCompletion:(id /* block */)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 untrimmed:(BOOL)a1 exact:(BOOL)a2;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 untrimmed:(BOOL)a1 exact:(BOOL)a2 forceSeek:(BOOL)a3;
- (void)startPeriodicTimeObserver;
- (void)stepByCount:(long long)a0 playheadTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)stopPeriodicTimeObserver;

@end

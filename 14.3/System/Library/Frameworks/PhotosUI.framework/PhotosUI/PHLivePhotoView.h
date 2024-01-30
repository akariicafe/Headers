@class UIGestureRecognizer, NSString, ISLivePhotoPlayer, ISPlayerItem, UIView, ISLivePhotoUIView, PHLivePhoto;
@protocol PHLivePhotoViewDelegate;

@interface PHLivePhotoView : UIView <PXLivePhotoView, ISChangeObserver> {
    struct { BOOL respondsToWillBeginPlaybackWithStyle; BOOL respondsToDidEndPlayback; } _delegateFlags;
    struct { BOOL respondsToDidEndPlayingVitality; BOOL respondsToDidBeginHinting; BOOL respondsToDidBeginScrubbing; BOOL respondsToDidEndScrubbing; } _delegatePrivateFlags;
    long long _currentPlaybackStyle;
}

@property (retain, nonatomic) ISLivePhotoPlayer *player;
@property (retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem;
@property (nonatomic, setter=_setPlayingVitality:) BOOL _playingVitality;
@property (nonatomic, setter=_setPlaybackRequested:) BOOL _playbackRequested;
@property (nonatomic, setter=_setScrubbing:) BOOL scrubbing;
@property (nonatomic) long long targetReadiness;
@property (nonatomic) BOOL shouldApplyTargetReadiness;
@property (retain, nonatomic) UIView *photoView;
@property (nonatomic) struct CGPoint { double x; double y; } scaleAnchorOffset;
@property (retain, nonatomic) ISLivePhotoUIView *playerView;
@property (retain, nonatomic) ISLivePhotoPlayer *player;
@property (nonatomic) BOOL showsStatusBorder;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } trimmedTimeRange;
@property (nonatomic) struct CGImage { } *overridePhoto;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } seekTime;
@property (readonly, nonatomic, getter=isDisplayingPhoto) BOOL displayingPhoto;
@property (weak, nonatomic) id<PHLivePhotoViewDelegate> delegate;
@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)livePhotoBadgeImageWithOptions:(unsigned long long)a0;

- (void)startPlaybackWithStyle:(long long)a0;
- (void)stopPlayback;
- (void)_updatePlayerTargetReadiness;
- (void)_updateCurrentPlaybackStyleAndSeeking;
- (void).cxx_destruct;
- (void)setContentMode:(long long)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_playerDidBeginHinting;
- (void)_commonPHLivePhotoViewInitialization;
- (id)initWithCoder:(id)a0;
- (void)_handlePlayerItemStatusChanged;
- (id)generateSnapshotImage;
- (void)_updatePlayingVitality;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateStatusBorder;
- (void)_updatePlayerAudioEnabled;

@end

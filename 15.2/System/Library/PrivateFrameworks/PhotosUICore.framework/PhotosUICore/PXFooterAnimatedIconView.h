@class AVPlayerItem, AVPlayerLayer, NSObject, AVPlayer;
@protocol OS_dispatch_queue;

@interface PXFooterAnimatedIconView : UIView {
    unsigned long long _reasonsToPause;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _lock_desiredMode;
    NSObject<OS_dispatch_queue> *_queue;
    AVPlayer *_player;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _introStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _loopStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _loopEndTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _outroEndTime;
    float _playerRateBeforePause;
    id _gridCycleTimeObservationToken;
    long long _waitingState;
    double _waitingStateStartTime;
}

@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) BOOL isPlayerHidden;
@property (nonatomic) BOOL isPlayerPaused;
@property (nonatomic) BOOL wantsGridCycleTimeObservation;
@property (nonatomic) long long style;
@property (readonly, nonatomic) BOOL isObscured;
@property (readonly, nonatomic) long long presentedState;
@property long long desiredMode;

- (void)layoutSubviews;
- (void)_updateStyle;
- (void)_transitionToState:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_mediaServicesWereReset:(id)a0;
- (void)_setNeedsUpdate;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)_update;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)_movieURL;
- (void)_windowDidChange;
- (void)_addReasonToPause:(unsigned long long)a0;
- (void)_removeReasonToPause:(unsigned long long)a0;
- (void)_updateIsPlayerPaused;
- (void)_layoutPlayer;
- (void)_crossedGridCycleBoundary;
- (void)_hideVideo;
- (void)_createPlayerIfNeeded;
- (void)_seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_didSeekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_didSeekToPlayFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_didPlayerToEndTime:(id)a0;
- (void)_applicationDidEnterForeground:(id)a0;

@end

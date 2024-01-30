@class PXScrubberSeekRequest, AVPlayerItem;
@protocol PXVideoScrubberControllerDelegate, PXVideoScrubberControllerTarget;

@interface PXVideoScrubberController : PXObservable {
    id _playerObserver;
    BOOL _needsUpdate;
    BOOL _avPlayerCurrentTimeNeedsUpdate;
    BOOL _avPlayerDurationNeedsUpdate;
    struct { BOOL respondsToDidUpdate; BOOL respondsToLengthForDuration; BOOL respondsToDesiredSeekTime; } _videoScrubberDelegateFlags;
    struct { BOOL respondsToWillBeginSeeking; BOOL respondsToDidEndSeeking; } _targetFlags;
}

@property (nonatomic, setter=_setPlayheadTime:) double _playheadTime;
@property (retain, nonatomic, setter=_setPendingSeekRequest:) PXScrubberSeekRequest *_pendingSeekRequest;
@property (retain, nonatomic, setter=_setActiveSeekRequest:) PXScrubberSeekRequest *_activeSeekRequest;
@property (nonatomic, setter=_setAvPlayerCurrentTime:) struct { long long value; int timescale; unsigned int flags; long long epoch; } _avPlayerCurrentTime;
@property (nonatomic, setter=_setAvPlayerDuration:) struct { long long value; int timescale; unsigned int flags; long long epoch; } _avPlayerDuration;
@property (weak, nonatomic) id<PXVideoScrubberControllerDelegate> delegate;
@property (readonly, nonatomic) id<PXVideoScrubberControllerTarget> target;
@property (readonly, nonatomic) double estimatedDuration;
@property (readonly, nonatomic) double length;
@property (nonatomic) double playheadProgress;
@property (readonly, nonatomic) AVPlayerItem *currentPlayerItem;
@property (readonly, nonatomic) float playRate;

- (id)init;
- (void)_updateSeeking;
- (void).cxx_destruct;
- (void)_seekToTime:(double)a0;
- (double)_lengthForDuration:(double)a0;
- (void)dealloc;
- (void)_setPlayheadProgress:(double)a0 andSeekVideoPlayer:(BOOL)a1;
- (void)beginSeeking;
- (void)_seekRequest:(id)a0 didFinish:(BOOL)a1;
- (void)_handleTimeoutCallbackForSeekRequest:(id)a0;
- (void)_playerDidChange:(id)a0;
- (void)_playerItemDurationDidChange;
- (void)_playerStatusDidChange;
- (double)_timeForProgress:(double)a0;
- (double)_progressForTime:(double)a0;
- (void)_invalidateAvPlayerCurrentTime;
- (void)_updateAvPlayerCurrentTimeIfNeeded;
- (void)_invalidateAvPlayerDuration;
- (void)_updateAvPlayerDurationIfNeeded;
- (void)_updateIfNeeded;
- (id)mutableChangeObject;
- (void)_addObservers;
- (void)endSeeking;
- (void)_removeObservers;
- (void)_invalidate;
- (double)_duration;
- (void)_playerItemDidChange;
- (id)initWithTarget:(id)a0 estimatedDuration:(double)a1;

@end

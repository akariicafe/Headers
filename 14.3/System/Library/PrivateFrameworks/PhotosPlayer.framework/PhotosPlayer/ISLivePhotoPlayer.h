@class NSSet, NSString, NSMutableSet, NSDate, ISLivePhotoVitalityFilter;

@interface ISLivePhotoPlayer : ISBasePlayer <ISLivePhotoSettleBehaviorDelegate, ISChangeObserver> {
    NSMutableSet *_playbackFilters;
    _Atomic int _fadeInRequestID;
    struct { BOOL scale; BOOL apertureMode; } _isValid;
    double _lastAppliedScale;
}

@property (nonatomic, setter=_setCurrentPlaybackStyle:) long long currentPlaybackStyle;
@property (nonatomic, setter=_setStyleToPlayWhenReady:) long long _styleToPlayWhenReady;
@property (nonatomic, setter=_setIsAttemptingToPlayback:) BOOL isAttemptingToPlayback;
@property (nonatomic, setter=_setSettleAutomaticallyWhenReady:) BOOL _settleAutomaticallyWhenReady;
@property (nonatomic, setter=_setShouldPrepareForVitalityWhenReady:) BOOL _shouldPrepareForVitalityWhenReady;
@property (nonatomic, setter=_setShouldPlayVitalityWhenReady:) BOOL _shouldPlayVitalityWhenReady;
@property (nonatomic, setter=_setShouldPrepareForHintWhenReady:) BOOL _shouldPrepareForHintWhenReady;
@property (nonatomic, getter=isPlayingVitality, setter=_setPlayingVitality:) BOOL playingVitality;
@property (nonatomic, getter=isHinting, setter=_setHinting:) BOOL hinting;
@property (retain, nonatomic, setter=_setVitalityTimeoutDate:) NSDate *_vitalityTimeoutDate;
@property (readonly, nonatomic) BOOL _canPlayVitality;
@property (readonly, nonatomic) NSSet *playbackFilters;
@property (retain, nonatomic) ISLivePhotoVitalityFilter *vitalityFilter;
@property (nonatomic) BOOL immediatelyShowsPhotoWhenPlaybackEnds;
@property (nonatomic, getter=isPlaybackAllowed) BOOL playbackAllowed;
@property (nonatomic) long long targetReadiness;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } trimTimeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateScaleIfNeeded;
- (void)startPlaybackWithStyle:(long long)a0;
- (void)stopPlayback;
- (void)_resetPlaybackFilters;
- (void)_fadeInAudio;
- (id)init;
- (void).cxx_destruct;
- (long long)_coalescedPlaybackFilterState;
- (void)playVitality;
- (void)activeBehaviorDidChange;
- (BOOL)vitalityBehaviorShouldEndPlayingAtPhoto:(id)a0;
- (void)_invalidateScale;
- (void)addPlaybackFilter:(id)a0;
- (void)didPerformChanges;
- (void)startPlaybackWithStyleWhenReady:(long long)a0;
- (void)playerItemDidChange;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handlePlaybackFilterDidChange;
- (void)removePlaybackFilter:(id)a0;
- (void)setSeekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;
- (void)configurePlayerItem;
- (void)startPlaybackWithStyleWhenReady:(long long)a0 settleAutomatically:(BOOL)a1;
- (void)setIsAttemptingToPlayback:(BOOL)a0;
- (void)playHintWhenReady;
- (void)_invalidateApertureMode;
- (void)prepareForVitality;
- (void)livePhotoPlaybackBehaviorDidBeginPlaying:(id)a0;
- (void)vitalityBehaviorDidBeginPlaying:(id)a0;
- (double)videoWillPlayToPhotoInterval;
- (void)livePhotoSettleBehaviorDidFinish:(id)a0;
- (void)_updatePlayerItemLoadingTarget;
- (void)_configurePlaybackFilters;
- (void)_handleVitalityFilterDidChange:(id)a0;
- (void)vitalityBehaviorDidEndPlaying:(id)a0;
- (void)prepareForHintWhenReady;
- (void)_updateHintingAndVitality;
- (id)_createVitalityBehavior;
- (void)stopPlaybackAnimated:(BOOL)a0;
- (double)_photoTransitionDuration;
- (void)livePhotoPlaybackBehaviorDidFinish:(id)a0;
- (void)_configurePlaybackFilter:(id)a0;
- (void)_prepareForVitalityIfNeeded;
- (void)livePhotoPlaybackBehaviorWillTransitionToPhoto:(id)a0;
- (void)_playIfNeeded;
- (double)lastAppliedScale;
- (void)_updateApertureModeIfNeeded;
- (void)statusDidChange;
- (void)startPlaybackWithStyle:(long long)a0 settleAutomatically:(BOOL)a1;
- (double)_coalescedPlaybackFilterHintProgress;

@end

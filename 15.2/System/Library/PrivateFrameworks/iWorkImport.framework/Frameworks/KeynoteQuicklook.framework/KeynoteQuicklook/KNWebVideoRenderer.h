@class KNBuildRenderer, NSString, TSDTextureSet;

@interface KNWebVideoRenderer : KNBuildRenderer <KNAmbientBuildRenderer> {
    double _startTime;
    BOOL _needsVideoAtStartTime;
    BOOL _animationsPaused;
    double _playbackAtStartTimePauseTime;
    double _playbackAtStartTimePauseOffset;
    id _ambientBuildStartCallbackTarget;
    SEL _ambientBuildCallbackSelector;
    BOOL _needsToSendAmbientBuildStartCallback;
    BOOL _needsToSendBuildEndCallback;
    TSDTextureSet *_posterImageTextureSet;
}

@property (weak, nonatomic) KNBuildRenderer *buildInRenderer;
@property (readonly, nonatomic) BOOL hasAmbientBuildStarted;
@property (readonly, nonatomic) BOOL shouldActionBuildsStopAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animate;
- (void)stopAnimations;
- (void).cxx_destruct;
- (void)pauseAnimations;
- (void)removeAnimationsAndFinish:(BOOL)a0;
- (void)updateAnimationsForLayerTime:(double)a0;
- (void)forceRemoveAnimations;
- (void)pauseAnimationsAtTime:(double)a0;
- (void)resumeAnimationsIfPausedAtTime:(double)a0;
- (BOOL)addAnimationsAtLayerTime:(double)a0;
- (void)resumeAnimationsIfPaused;
- (void)registerForAmbientBuildStartCallback:(SEL)a0 target:(id)a1;
- (void)interruptAndReset;
- (void)p_scheduleVideoAtStartTime;
- (void)p_didFailWithError:(id)a0;
- (void)p_startVideo;
- (void)p_stopVideo;
- (void)p_didStopVideo;
- (void)p_unscheduleVideoAtStartTime;
- (void)p_didStartVideo;
- (void)p_cancelVideoAtStartTime;
- (void)p_showVideoAtStartTime;

@end

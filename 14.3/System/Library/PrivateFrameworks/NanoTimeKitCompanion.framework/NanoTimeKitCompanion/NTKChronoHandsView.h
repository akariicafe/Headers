@class NTKHandView, NTKChronoPalette;

@interface NTKChronoHandsView : NTKAnalogHandsView {
    BOOL _isChronoAnimationRunning;
}

@property (nonatomic) unsigned long long timeScale;
@property (retain, nonatomic) NTKChronoPalette *palette;
@property (readonly, nonatomic) NTKHandView *chronoSecondHandView;
@property (readonly, nonatomic) NTKHandView *chronoFlybackSecondHandView;
@property (readonly, nonatomic) NTKHandView *chronoMinuteHandView;
@property (readonly, nonatomic) NTKHandView *chronoFlybackMinuteHandView;
@property (nonatomic) BOOL minuteHandUsesManualTime;

+ (long long)preferredCountOfInstancesToCache;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initForDevice:(id)a0;
- (void)showTimeMode;
- (void)showChronoMode;
- (void)updateLapHandsVisibility;
- (id)createSecondHandView;
- (void)_enumerateSecondHandViewsWithBlock:(id /* block */)a0;
- (double)_stopwatchCurrentTime;
- (id)createTinyBabyHandViewWithColor:(id)a0;
- (void)startNewChronoAnimation;
- (void)stopChronoAnimation;
- (void)_enumeratePrimaryChronoHands:(id /* block */)a0;
- (BOOL)_stopwatchIsRunning;
- (double)_stopwatchCurrentLapTime;
- (double)chronoDuration;
- (double)upperDuration;
- (float)zRotationForTime:(double)a0 withDuration:(float)a1;
- (double)secondsAnimationFPS;
- (void)_enumerateChronoHandViews:(id /* block */)a0;
- (BOOL)_stopwatchIsStopped;
- (long long)_stopwatchLapCount;
- (void)_enumerateFlybackChronoHands:(id /* block */)a0;

@end

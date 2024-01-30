@class OKPresentationCouchStep, OKPresentationCouch, NSObject;
@protocol OS_dispatch_source, OKCouchControllerDelegate;

@interface OKCouchController : NSObject {
    OKPresentationCouch *_couch;
    OKPresentationCouchStep *_lastStep;
    unsigned long long _stepMode;
    double _currentStepStartTime;
    double _readinessWaitStartTime;
    double _progress;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _startValidityBarrier;
    long long _stopCounter;
    BOOL _isPlaying;
    BOOL _hasStartedToWait;
}

@property id<OKCouchControllerDelegate> delegate;
@property (nonatomic) double defaultStepDuration;
@property (readonly, nonatomic) double currentStepDuration;
@property (nonatomic) BOOL loops;
@property (nonatomic) double delayForReadinessWaitNotification;

- (void)startPlayback;
- (void)stopPlayback;
- (void)dealloc;
- (void)_setupTimer;
- (void)overrideMode:(unsigned long long)a0 andCurrentStepDuration:(double)a1;
- (void)allowPlayback;
- (void)preventPlayback;
- (BOOL)canStartPlayback;
- (void)startPlaybackAfterDelay:(double)a0;
- (id)initWithCouch:(id)a0 andDelegate:(id)a1;
- (void)_dispatchNextStep;
- (id)_nextCouchStep:(id)a0;
- (void)_executeStep:(id)a0 forTargetPageViewController:(id)a1;
- (void)_timerEventHandler;

@end

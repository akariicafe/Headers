@class NSString;
@protocol PLMomentGenerationThrottleTimeProvider;

@interface PLMomentGenerationThrottle : NSObject {
    BOOL _canDelayAnyQOS;
    id /* block */ _targetBlock;
    NSString *_name;
    id<PLMomentGenerationThrottleTimeProvider> _timeProvider;
    BOOL _singleThreaded;
    struct atomic_flag { _Atomic BOOL _Value; } _shouldRunAgain;
    struct atomic_flag { _Atomic BOOL _Value; } _isExecutingOrConsideringExecution;
    double _lastRunDuration;
    double _lastRunEndTime;
    double _nextExpectedRun;
}

- (BOOL)isIdle;
- (void)update;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 canDelayAnyQOS:(BOOL)a1 singleThreadedMode:(BOOL)a2 timeProvider:(id)a3 target:(id /* block */)a4;

@end

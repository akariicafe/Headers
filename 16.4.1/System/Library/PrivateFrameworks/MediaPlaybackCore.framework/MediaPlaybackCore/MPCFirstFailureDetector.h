@class MPCAudioFailure;

@interface MPCFirstFailureDetector : NSObject {
    long long _state;
    double _dT;
    double _limit;
    unsigned long long _currentSample;
    unsigned long long _currentFailureStartSample;
    unsigned long long _lastFailureSample;
    unsigned long long _failureCount;
}

@property (readonly, nonatomic) MPCAudioFailure *singleSampleFailure;
@property (readonly, nonatomic) MPCAudioFailure *multiSamplesFailure;
@property (readonly, nonatomic) double samplingTime;

- (void).cxx_destruct;
- (id)initWithSamplingTime:(double)a0 renderingLimit:(double)a1;
- (BOOL)processSample:(id)a0;

@end

@class ATMovingAverage;

@interface ATThroughputCalculator : NSObject {
    BOOL _suspended;
    double _lastUpdate;
    double _startTime;
    double _currentValue;
    ATMovingAverage *_average;
}

@property (readonly, nonatomic) double throughput;

- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (BOOL)update:(double)a0;
- (void)resume;

@end

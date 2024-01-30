@class ATMovingAverage;

@interface ATThroughputCalculator : NSObject {
    BOOL _suspended;
    double _lastUpdate;
    double _startTime;
    double _currentValue;
    ATMovingAverage *_average;
}

@property (readonly, nonatomic) double throughput;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (BOOL)update:(double)a0;
- (void)suspend;

@end

@interface PUVelocityFilter : PUDynamicValueFilter {
    double _lastValue;
    double _lastTime;
    double _velocity;
    double _previousVelocity;
    double _filteredVelocity;
}

@property (nonatomic, setter=_setMinimumSampleInterval:) double _minimumSampleInterval;
@property (nonatomic, setter=_setPreviousVelocityWeight:) double _previousVelocityWeight;

+ (id)gestureVelocityFilter;

- (id)init;
- (double)outputValue;
- (void)setInputValue:(double)a0;

@end

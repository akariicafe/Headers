@interface QLPXVelocityNumberFilter : QLPXNumberFilter {
    double _minimumSampleInterval;
    double _previousVelocityWeight;
    double _lastValue;
    double _lastTime;
    double _velocity;
    double _previousVelocity;
    double _filteredVelocity;
}

+ (id)gestureVelocityFilter;

- (id)initWithInput:(double)a0;
- (double)updatedOutput;

@end

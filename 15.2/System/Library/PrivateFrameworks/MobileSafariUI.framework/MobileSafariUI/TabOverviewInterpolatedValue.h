@class NSHashTable;

@interface TabOverviewInterpolatedValue : NSObject {
    NSHashTable *_dependants;
    NSHashTable *_dependencies;
    double _instantaneousTargetValue;
    double _lastRenderedValue;
    double _value;
    double _targetValue;
    double _epsilon;
    double _decelerationFactor;
}

- (id)description;
- (void).cxx_destruct;

@end

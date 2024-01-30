@class NSMutableArray;

@interface _UIHIDPathSynchronizationFilter : NSObject {
    struct CGPoint { double x; double y; } _initialPosition;
    double _initialInputTimestamp;
    struct CGPoint { double x; double y; } _currentInputPosition;
    double _currentInputTimestamp;
    double _outputPositionTimestampInInputScale;
    NSMutableArray *_inputEvents;
    struct { double minTimeScalingFactor; double maxTimeScalingFactor; double peakThreshold; } _configuration;
    long long _state;
    double _outputPositionTimestamp;
    struct CGPoint { double x; double y; } _outputPosition;
}

- (void).cxx_destruct;

@end

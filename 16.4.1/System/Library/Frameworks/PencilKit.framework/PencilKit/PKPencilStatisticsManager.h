@class NSString;

@interface PKPencilStatisticsManager : NSObject {
    struct unique_ptr<PKRunningStat, std::default_delete<PKRunningStat>> { struct __compressed_pair<PKRunningStat *, std::default_delete<PKRunningStat>> { struct PKRunningStat *__value_; } __ptr_; } _intentionalHoverStats;
    BOOL _hasStarted;
    double _accumulatedHoverDuration;
    double _accumulatedOnScreenDuration;
    NSString *_toolName;
    double _startOfSessionTimestamp;
    unsigned long long _numberOfHoverEventsInEdge;
    unsigned long long _numberOfHoverEventsInExterior;
    unsigned long long _totalNumberOfHoverEvents;
    unsigned long long _doubleTapsInRange;
    unsigned long long _doubleTapsOutsideRange;
    double _intentionalToolPreviewDuration;
    double _intentionalHoverDuration;
    NSString *_allowedBundleID;
    unsigned long long _activePencilMinutes;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end

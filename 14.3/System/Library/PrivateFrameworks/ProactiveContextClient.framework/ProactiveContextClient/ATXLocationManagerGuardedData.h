@class NSDate, CLLocation, ATXLocationManagerState;

@interface ATXLocationManagerGuardedData : NSObject {
    CLLocation *currentLocation;
    unsigned long long currentRoutineMode;
    ATXLocationManagerState *state;
    NSDate *lastLOIUpdateTimestamp;
    NSDate *lastRoutineModeTimestamp;
    NSDate *lastPredictedLOIsUpdateTimestamp;
    NSDate *lastPredictedExitTimesUpdateTimestamp;
}

- (void)clear;
- (id)init;
- (void).cxx_destruct;

@end

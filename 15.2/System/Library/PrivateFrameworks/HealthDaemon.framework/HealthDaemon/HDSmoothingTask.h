@class NSArray, HKWorkoutRoute, HDDaemonTransaction;

@interface HDSmoothingTask : NSObject {
    HKWorkoutRoute *_sample;
    NSArray *_unsmoothedLocations;
    unsigned long long _workoutActivityType;
    id /* block */ _completionHandler;
    HDDaemonTransaction *_transaction;
    unsigned long long _smoothingAttempts;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

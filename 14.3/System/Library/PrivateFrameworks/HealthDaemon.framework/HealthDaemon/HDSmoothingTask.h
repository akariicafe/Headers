@class NSArray, HKWorkoutRoute, HDDaemonTransaction;

@interface HDSmoothingTask : NSObject

@property (retain, nonatomic) HKWorkoutRoute *sample;
@property (retain, nonatomic) NSArray *unsmoothedLocations;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) HDDaemonTransaction *transaction;
@property unsigned long long smoothingAttempts;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRoute:(id)a0;

@end

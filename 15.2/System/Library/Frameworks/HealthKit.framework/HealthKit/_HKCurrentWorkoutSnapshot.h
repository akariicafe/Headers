@class NSUUID, HKWorkoutConfiguration, NSString, NSDate;

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) HKWorkoutConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL isFirstPartyWorkout;
@property (readonly, nonatomic) long long sessionState;
@property (readonly, nonatomic) long long internalState;
@property (readonly, nonatomic) NSDate *snapshotDate;
@property (readonly, nonatomic) double elapsedTime;

- (void)encodeWithCoder:(id)a0;
- (double)elapsedTimeAtDate:(id)a0;
- (long long)state;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithSessionIdentifier:(id)a0 workoutConfiguration:(id)a1 sessionServerState:(long long)a2 applicationIdentifier:(id)a3 elapsedTime:(double)a4 snapshotDate:(id)a5;

@end

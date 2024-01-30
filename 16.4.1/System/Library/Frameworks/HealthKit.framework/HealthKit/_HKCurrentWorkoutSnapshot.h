@class NSUUID, HKWorkoutConfiguration, NSString, NSDate;

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) HKWorkoutConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL isFirstPartyWorkout;
@property (readonly, nonatomic) long long sessionState;
@property (readonly, nonatomic) long long internalState;
@property (readonly, nonatomic) BOOL isBuilderPaused;
@property (readonly, nonatomic) NSDate *snapshotDate;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, copy, nonatomic) NSDate *builderStartDate;

- (long long)state;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithSessionIdentifier:(id)a0 workoutConfiguration:(id)a1 sessionServerState:(long long)a2 isBuilderPaused:(BOOL)a3 applicationIdentifier:(id)a4 elapsedTime:(double)a5 snapshotDate:(id)a6 builderStartDate:(id)a7;
- (double)elapsedTimeAtDate:(id)a0;

@end

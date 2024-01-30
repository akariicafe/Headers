@class NSUUID, NSDate;

@interface CMWorkout : NSObject <NSSecureCoding, NSCopying> {
    NSUUID *fSessionId;
    long long fType;
    long long fLocationType;
    NSDate *fStartDate;
    NSDate *fEndDate;
    BOOL fIsUserInitiated;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isUserInitiated;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long locationType;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (BOOL)isAvailable;
+ (id)workoutName:(long long)a0;
+ (BOOL)workoutIsTypeWalking:(long long)a0;
+ (BOOL)workoutIsTypeRunning:(long long)a0;
+ (long long)workoutLocationTypeFromCMWorkoutType:(long long)a0;
+ (id)workoutLocationName:(long long)a0;
+ (int)CLMotionActivityTypeFromCMWorkoutType:(long long)a0;
+ (long long)CMWorkoutTypeFromCLMotionActivityType:(int)a0;
+ (long long)CMWorkoutLocationTypeFromCMSwimWorkoutLocation:(long long)a0;
+ (BOOL)workoutIsTypePedestrian:(long long)a0;
+ (long long)CMSwimWorkoutLocationFromCMWorkoutLocationType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setLocationType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void)setWorkoutType:(long long)a0;
- (id)initWithSessionId:(id)a0 type:(long long)a1;
- (id)initWithSessionId:(id)a0 type:(long long)a1 locationType:(long long)a2;
- (id)initWithSessionId:(id)a0 type:(long long)a1 locationType:(long long)a2 startDate:(id)a3 endDate:(id)a4;
- (void)setIsUserInitiated:(BOOL)a0;

@end

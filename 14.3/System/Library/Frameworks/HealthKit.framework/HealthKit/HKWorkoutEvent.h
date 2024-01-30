@class NSUUID, NSDateInterval, NSDictionary, NSDate, NSError;

@interface HKWorkoutEvent : NSObject <HKPersistableWorkoutEvent, NSSecureCoding, NSCopying> {
    long long _type;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) long long workoutEventType;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)_newWorkoutEventWithType:(long long)a0 dateInterval:(id)a1 metadata:(id)a2;
+ (id)_workoutEventWithType:(long long)a0 date:(id)a1 metadata:(id)a2;
+ (id)_unvalidatedWorkoutEventWithType:(long long)a0 dateInterval:(id)a1 metadata:(id)a2;
+ (id)_workoutEventWithType:(long long)a0 dateInterval:(id)a1 metadata:(id)a2;
+ (id)workoutEventWithType:(long long)a0 date:(id)a1;
+ (id)workoutEventWithType:(long long)a0 date:(id)a1 metadata:(id)a2;
+ (id)workoutEventWithType:(long long)a0 dateInterval:(id)a1 metadata:(id)a2;
+ (id)_workoutEventWithInternalEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_assertPropertiesValid;
- (id)initWithWorkoutEventType:(long long)a0 sessionUUID:(id)a1 dateInterval:(id)a2 metadata:(id)a3 error:(id)a4;
- (void)_setWorkoutEventMetadata:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (id)description;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

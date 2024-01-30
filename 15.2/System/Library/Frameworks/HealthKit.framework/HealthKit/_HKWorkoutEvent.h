@class NSUUID, NSDateInterval, NSDictionary, NSError;

@interface _HKWorkoutEvent : NSObject <NSSecureCoding, HKPersistableWorkoutEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) long long eventType;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) long long workoutEventType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWorkoutEventType:(long long)a0 sessionUUID:(id)a1 dateInterval:(id)a2 metadata:(id)a3 error:(id)a4;
- (id)initWithSessionId:(id)a0 error:(id)a1;
- (id)initWithEventType:(long long)a0 sessionId:(id)a1 dateInterval:(id)a2 metadata:(id)a3;

@end

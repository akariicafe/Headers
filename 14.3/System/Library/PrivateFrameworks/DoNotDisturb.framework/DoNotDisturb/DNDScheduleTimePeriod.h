@class DNDScheduleTime;

@interface DNDScheduleTimePeriod : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) DNDScheduleTime *startTime;
@property (readonly, copy, nonatomic) DNDScheduleTime *endTime;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStartTime:(id)a0 endTime:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithPeriod:(id)a0;

@end

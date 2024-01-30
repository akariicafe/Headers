@class DNDScheduleTime;

@interface DNDScheduleTimePeriod : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) DNDScheduleTime *startTime;
@property (readonly, copy, nonatomic) DNDScheduleTime *endTime;
@property (readonly, nonatomic) unsigned long long weekdays;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStartTime:(id)a0 endTime:(id)a1 weekdays:(unsigned long long)a2;
- (unsigned long long)hash;
- (id)_initWithPeriod:(id)a0;

@end

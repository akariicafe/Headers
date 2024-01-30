@class SCLScheduleTime;

@interface SCLTimeInterval : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SCLScheduleTime *startTime;
@property (readonly, copy, nonatomic) SCLScheduleTime *endTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)crossesDayBoundary;
- (BOOL)intersectsTimeInterval:(id)a0;
- (BOOL)containsScheduleTime:(id)a0;

@end

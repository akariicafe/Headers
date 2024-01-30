@class SCLScheduleTime;

@interface SCLTimeInterval : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SCLScheduleTime *startTime;
@property (readonly, copy, nonatomic) SCLScheduleTime *endTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)crossesDayBoundary;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)intersectsTimeInterval:(id)a0;
- (BOOL)containsScheduleTime:(id)a0;

@end

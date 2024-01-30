@class NSDateComponents;

@interface STConfigurationScheduleDay : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDateComponents *startTime;
@property (readonly) NSDateComponents *endTime;
@property (readonly) unsigned long long weekday;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 weekday:(unsigned long long)a2;
- (BOOL)isEqualToConfigurationScheduleDay:(id)a0;

@end

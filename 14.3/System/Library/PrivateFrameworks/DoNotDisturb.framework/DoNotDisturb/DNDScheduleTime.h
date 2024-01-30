@interface DNDScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long hour;
@property (readonly, nonatomic) unsigned long long minute;

+ (id)defaultStartTime;
+ (id)defaultEndTime;

- (id)dateComponents;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (id)_initWithTime:(id)a0;

@end

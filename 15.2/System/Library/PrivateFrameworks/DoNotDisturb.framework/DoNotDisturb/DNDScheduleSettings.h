@class DNDScheduleTimePeriod;

@interface DNDScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long scheduleEnabledSetting;
@property (readonly, copy, nonatomic) DNDScheduleTimePeriod *timePeriod;
@property (readonly, nonatomic) unsigned long long bedtimeBehaviorEnabledSetting;

- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithSettings:(id)a0;
- (unsigned long long)hash;

@end

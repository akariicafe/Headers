@class NSDictionary;

@interface STConfigurationSchedule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allDaysTheSame;
@property (readonly, copy) NSDictionary *scheduleDaysByWeekdayIndex;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithScheduleDays:(id)a0;
- (BOOL)isEqualToConfigurationSchedule:(id)a0;
- (id)initWithRepeatedScheduleDay:(id)a0;

@end

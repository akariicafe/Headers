@interface EKRecurrenceDayOfWeek : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long dayOfTheWeek;
@property (readonly, nonatomic) long long weekNumber;

+ (id)dayOfWeek:(long long)a0;
+ (id)dayOfWeek:(long long)a0 weekNumber:(long long)a1;
+ (long long)icsWeekDayFromDayOfTheWeek:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)iCalendarValueFromDayOfTheWeek:(long long)a0;
- (id)iCalendarDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDayOfTheWeek:(long long)a0 weekNumber:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end

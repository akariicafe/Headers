@interface CalRecurrenceDayOfWeek : NSObject <NSCopying>

@property (readonly, nonatomic) long long dayOfTheWeek;
@property (readonly, nonatomic) long long weekNumber;

+ (id)dayOfWeek:(long long)a0;
+ (id)dayOfWeek:(long long)a0 weekNumber:(long long)a1;

- (id)iCalendarDescription;
- (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDayOfTheWeek:(long long)a0 weekNumber:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end

@class NSTimeZone, NSCalendar, NSDate;

@interface UNLegacyNotificationTrigger : UNNotificationTrigger

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSCalendar *repeatCalendar;
@property (nonatomic) int remainingRepeatCount;
@property (nonatomic) int totalRepeatCount;
@property (nonatomic) unsigned long long repeatInterval;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithDate:(id)a0 timeZone:(id)a1 repeatInterval:(unsigned long long)a2 repeatCalendar:(id)a3;
+ (id)triggerWithDate:(id)a0 timeZone:(id)a1 remainingRepeatCount:(int)a2 totalRepeatCount:(int)a3 repeatInterval:(unsigned long long)a4 repeatCalendar:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithDate:(id)a0 timeZone:(id)a1 remainingRepeatCount:(int)a2 totalRepeatCount:(int)a3 repeatInterval:(unsigned long long)a4 repeatCalendar:(id)a5;
- (id)_nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1 defaultTimeZone:(id)a2;
- (double)_retroactiveTriggerHysteresis;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;
- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;

@end

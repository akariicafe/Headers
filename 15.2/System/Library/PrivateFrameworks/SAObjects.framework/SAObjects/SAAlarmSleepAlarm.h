@class NSNumber;

@interface SAAlarmSleepAlarm : SAAlarmObject

@property (copy, nonatomic) NSNumber *bedtimeHour;
@property (copy, nonatomic) NSNumber *bedtimeMinute;
@property (copy, nonatomic) NSNumber *isFiringNext;
@property (copy, nonatomic) NSNumber *isOverride;

+ (id)sleepAlarmWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

@class SleepAlarmAttribute, NSString, NSArray, NSDateComponents, NSNumber;

@interface SiriAlarm : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSNumber *enabled;
@property (nonatomic, retain) NSNumber *firing;
@property (nonatomic, copy) NSArray *repeatSchedule;
@property (nonatomic, retain) SleepAlarmAttribute *sleepAlarmAttribute;
@property (nonatomic, copy) NSDateComponents *dateTime;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (BOOL)isEqual:(id)a0;

@end

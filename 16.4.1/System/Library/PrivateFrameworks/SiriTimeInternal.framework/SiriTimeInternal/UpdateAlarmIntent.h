@class AlarmSearch, SiriAlarm, NSString, NSDateComponents, NSNumber;

@interface UpdateAlarmIntent : INIntent

@property (nonatomic, retain) AlarmSearch *alarmSearch;
@property (nonatomic, retain) SiriAlarm *alarm;
@property (nonatomic) long long operation;
@property (nonatomic, copy) NSDateComponents *proposedTime;
@property (nonatomic, copy) NSString *proposedLabel;
@property (nonatomic, retain) NSNumber *proposedMeridiemSetByUser;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end

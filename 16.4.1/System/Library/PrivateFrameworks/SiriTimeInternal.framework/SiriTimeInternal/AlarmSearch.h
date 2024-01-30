@class NSString, NSArray, NSDateComponents, NSNumber, INDateComponentsRange;

@interface AlarmSearch : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long alarmSearchStatus;
@property (nonatomic, retain) NSNumber *includeSleepAlarm;
@property (nonatomic) long long period;
@property (nonatomic, retain) NSNumber *isMeridianInferred;
@property (nonatomic) long long alarmReferenceType;
@property (nonatomic, copy) NSArray *repeatSchedule;
@property (nonatomic, copy) NSDateComponents *time;
@property (nonatomic, retain) INDateComponentsRange *timeRange;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end

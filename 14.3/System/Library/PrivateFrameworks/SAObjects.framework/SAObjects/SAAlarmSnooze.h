@class NSArray, NSString;

@interface SAAlarmSnooze : SADomainCommand <SAAlarmAlarmAction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *alarmIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)snooze;
+ (id)snoozeWithDictionary:(id)a0 context:(id)a1;

@end

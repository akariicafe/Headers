@class NSArray, NSString;

@interface SAAlarmAlarmShow : AceObject <SAAlarmAlarmAction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *alarmIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alarmShow;
+ (id)alarmShowWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end

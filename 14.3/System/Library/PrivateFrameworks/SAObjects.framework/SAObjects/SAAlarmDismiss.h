@class NSArray;

@interface SAAlarmDismiss : SADomainCommand

@property (copy, nonatomic) NSArray *alarmIds;

+ (id)dismissWithDictionary:(id)a0 context:(id)a1;
+ (id)dismiss;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end

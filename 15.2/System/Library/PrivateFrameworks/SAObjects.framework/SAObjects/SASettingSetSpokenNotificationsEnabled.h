@class NSString, NSDate;

@interface SASettingSetSpokenNotificationsEnabled : SASettingSetBool

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSDate *timeToReEnable;

+ (id)setSpokenNotificationsEnabled;
+ (id)setSpokenNotificationsEnabledWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
